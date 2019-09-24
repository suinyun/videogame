//background: https://www.spriters-resource.com/game_boy_advance/pokemonfireredleafgreen/sheet/3776/
/*
	HOW TO PLAY GAME: you (purple spaceship for now) will move with arrow keys,
	and shoot out hearts (press A) to find your true love. 

	shoot to your true love (white FILLED box for now) to win.
	if you shoot to others (white-empty boxes for now), then your life will decrease.

	Try not to get hit by "bad" emojis (aliens for now). bc, life--
	Try to get hit by "good" emojis (pink box for now). bc, life++

	WHAT IS FINISHED: Core functionality - Ability to win and lose from playing the game
	WHAT IS TO BE ADDED: Emoji Sprites and Extra Large Backgrounds with world movements, 
	when the game restarts from lose or win state,
	 one of the "bad emojis" starts at a weird place and gets stuck on the wall.
	 cheat: if both A and B are pressed, then all bad emojis turn to good emojis(? subjected to change)
	 	or the player is invincible
	 - win and lose state be called after the main game loop
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "myLib.h"
#include "start.h"
#include "pause.h"
#include "win.h"
#include "lose.h"
#include "enemies.h"
#include "game.h"
#include "bg.h"
#include "instructions.h"
#include "village.h"
#include "startMusic.h"
#include "gameMusic.h"
#include "winSong.h"
#include "loseSong.h"
#include "sound.h"
#include "SHOOT.h"
#include "breakSound.h"
#include "simIns.h"
#include "collisionmap.h"

SOUND soundA;
SOUND soundB;
const unsigned char* spaceSound;
int* spaceSoundLen;
int spaceSoundToPlay = 0;
MOVOBJ objs[NUMOBJS];
int size = NUMOBJS;

// Prototypes
void initialize();

// State Prototypes
void goToStart();
void start();
void goToGame();
void game();
void goToPause();
void pause();
void goToWin();
void win();
void goToLose();
void lose();
void instruction();
void goToInstruction();

// States
enum {START, INSTRUCTION, GAME, PAUSE, WIN, LOSE};
int state;

// Button Variables
unsigned short buttons;
unsigned short oldButtons;

int main() {

    initialize();
    setupSounds();
    setupInterrupts();
    

    while(1) {

        // Update button variables
        oldButtons = buttons;
        buttons = BUTTONS;


                
        // State Machine
        switch(state) {

            case START:
                start();
                break;
            case INSTRUCTION:
                instruction();
                break;
            case GAME:
                game();
                break;
            case PAUSE:
                pause();
                break;
            case WIN:
                win();
                break;
            case LOSE:
                lose();
                break;
        }
               
    }
}

// Sets up GBA
void initialize() {

	DMANow(3, startPal, PALETTE, 256);
	DMANow(3, startTiles, &CHARBLOCK[0], startTilesLen / 2);
	DMANow(3, startMap, &SCREENBLOCK[31], startMapLen / 2);

    REG_DISPCTL = MODE0 | BG0_ENABLE;

    REG_BG0CNT = BG_SIZE_WIDE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31);

    hideSprites();

    // Set up the first state
    goToStart();
 }

// Sets up the start state
void goToStart() {

    stopSound();
    playSoundA(startMusic,STARTMUSICLEN,STARTMUSICFREQ, 1);

    waitForVBlank();
    DMANow(3, startPal, PALETTE, 256);
    DMANow(3, startTiles, &CHARBLOCK[0], startTilesLen / 2);
    DMANow(3, startMap, &SCREENBLOCK[31], startMapLen / 2);

    REG_DISPCTL = MODE0 | BG0_ENABLE;

    REG_BG0CNT = BG_SIZE_SMALL | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31);
    state = START;

    REG_BG0VOFF = 0;
    REG_BG0HOFF = 0;
}

// Runs every frame of the start state
void start() {


    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {

        goToInstruction();
    }
}

// Sets up the start state
void goToInstruction() {

    DMANow(3, instructionsPal, PALETTE, 256);
    DMANow(3, instructionsTiles, &CHARBLOCK[0], instructionsTilesLen / 2);
    DMANow(3, instructionsMap, &SCREENBLOCK[31], instructionsMapLen / 2);

    DMANow(3, simInsTiles, &CHARBLOCK[2], simInsTilesLen / 2);
    DMANow(3, simInsMap, &SCREENBLOCK[29], simInsMapLen / 2);


    REG_DISPCTL = MODE0 | BG0_ENABLE | BG1_ENABLE;

    REG_BG0CNT = BG_SIZE_SMALL | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31);
    REG_BG1CNT = BG_SIZE_SMALL | BG_CHARBLOCK(2) | BG_SCREENBLOCK(29);

    state = INSTRUCTION;

    REG_BG0VOFF = 0;
    REG_BG0HOFF = 0;
}

// Runs every frame of the start state
void instruction() {

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {

        stopSound();
        playSoundA(gameMusic, GAMEMUSICLEN, GAMEMUSICFREQ, 1);
        initGame();
        goToGame();
        
    }
}

// Sets up the game state
void goToGame() {
    
    DMANow(3, bgPal, PALETTE, 256);
    DMANow(3, bgTiles, &CHARBLOCK[0], bgTilesLen / 2);
    DMANow(3, bgMap, &SCREENBLOCK[28], bgMapLen / 2);

    REG_BG0VOFF = vOff;
    REG_BG0HOFF = hOff;
    REG_BG0CNT = BG_SIZE_LARGE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28) | 1;

    REG_BLDMOD = BG1_A | BG0_B | OBJ_B | NORMAL_TRANS;
    REG_COLEV = WEIGHTOFA(12) | WEIGHTOFB(2);

    DMANow(3, enemiesPal, SPRITEPALETTE, enemiesPalLen / 2);
    DMANow(3, enemiesTiles, &CHARBLOCK[4], enemiesTilesLen / 2);
    hideSprites();
    DMANow(3, shadowOAM, OAM, 128*4);
    
    REG_DISPCTL = MODE0 | SPRITE_ENABLE | BG0_ENABLE ;
    state = GAME;
}

// Runs every frame of the game state
void game() {

    updateGame();
    drawGame();

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) 
        goToPause();
    if (livesRemaining == 0) {
        stopSound();
        playSoundA(loseSong, LOSESONGLEN, LOSESONGFREQ, 1);
        goToLose();
    } else if (won == 1) {
        stopSound();
        playSoundA(winSong, WINSONGLEN, WINSONGFREQ, 1);
        goToWin();
    }
}

// Sets up the pause state
void goToPause() {
	//DMANow(3, pausePal, PALETTE, 256);
	DMANow(3, pauseTiles, &CHARBLOCK[3], pauseTilesLen / 2);
	DMANow(3, pauseMap, &SCREENBLOCK[27], pauseMapLen / 2);


    REG_BLDMOD = BG1_A | BG0_B | OBJ_B | NORMAL_TRANS;
    REG_COLEV = WEIGHTOFA(13) | WEIGHTOFB(4);
    REG_BG1CNT = BG_SIZE_WIDE | BG_CHARBLOCK(3) | BG_SCREENBLOCK(27) | 0;

    state = PAUSE;

    REG_DISPCTL = MODE0 | BG0_ENABLE | BG1_ENABLE ;
    REG_BG0VOFF = 0;
    REG_BG0HOFF = 0;
}

// Runs every frame of the pause state
void pause() {
    
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        goToGame();
    else if (BUTTON_PRESSED(BUTTON_SELECT))
        goToStart();
}

// Sets up the win state
void goToWin() {

    DMANow(3, winPal, PALETTE, 256);
	DMANow(3, winTiles, &CHARBLOCK[0], winTilesLen / 2);
	DMANow(3, winMap, &SCREENBLOCK[31], winMapLen / 2);

    REG_DISPCTL = MODE0 | BG0_ENABLE;

    REG_BG0CNT = BG_SIZE_WIDE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31);

    state = WIN;

    REG_BG0VOFF = 0;
    REG_BG0HOFF = 0;
}

// Runs every frame of the win state
void win() {
    
    // Lock the framerate to 60 fps

    REG_BG0VOFF = 0;
    REG_BG0HOFF = 0;

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        //initialize();
        goToStart();
        won  = 0;
}

// Sets up the lose state
void goToLose() {

    DMANow(3, losePal, PALETTE, 256);
	DMANow(3, loseTiles, &CHARBLOCK[0], loseTilesLen / 2);
	DMANow(3, loseMap, &SCREENBLOCK[31], loseMapLen / 2);

    REG_DISPCTL = MODE0 | BG0_ENABLE;

    REG_BG0CNT = BG_SIZE_WIDE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31);
    
    state = LOSE;
    player.aniCounter = 0;

    REG_BG0VOFF = 0;
    REG_BG0HOFF = 0;
}

// Runs every frame of the lose state
void lose() {
     
    REG_BG0VOFF = 0;
    REG_BG0HOFF = 0;

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        //initialize();
        goToStart();
}