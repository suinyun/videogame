#include <stdlib.h>
#include "myLib.h"
#include "game.h"
#include "enemies.h"
#include "bg.h"
#include "instructions.h"
#include "village.h"
#include "SHOOT.h"
#include "breakSound.h"
#include "gmae.h"
#include "collisionmap.h"


// Variables
ANISPRITE goodEmojis[GEMOJICOUNT];
ANISPRITE player;
ANISPRITE crush;
ANISPRITE mediocres[MCOUNT];
ANISPRITE lives[LIVESCOUNT];
ANISPRITE pbullets[PBULLETCOUNT];
ANISPRITE enemies[ENEMIESCOUNT];
int enemiesRemaining;
int livesRemaining;
int hOff;
int vOff;
int collided = 0;
int won = 0;
int cheat = 0;

OBJ_ATTR shadowOAM[128];


// Initialize the game
void initGame() {


	initPlayer();
    initPBullets();
    initEnemy();
    initLives();
    initCrush();
    initMediocre();
    initGEmojis();

    // Place screen on map
    vOff = 0;
    hOff = 0;
    // Initialize the score
	enemiesRemaining = ENEMIESCOUNT;
	livesRemaining = 3;

    // Initialize the colors
    unsigned short colors[NUMCOLORS] = {BLACK, BLUE, GREEN, RED, WHITE, GRAY};

    // Load the custom game colors to the end
    for (int i = 0; i < NUMCOLORS; i++) {
        PALETTE[256-NUMCOLORS+i] = colors[i];
    }
}

// Updates the game each frame
void updateGame() {

	updatePlayer();
	updateCrush();


	// Update all the playerbullets
	for (int i = 0; i < PBULLETCOUNT; i++)
		updatePBullet(&pbullets[i]);

	// Update all the enemies
	for (int i = 0; i < ENEMIESCOUNT; i++)
		updateEnemy(&enemies[i]);

	for (int i = 0; i < MCOUNT; i++)
		updateMediocre(&mediocres[i]);

	for (int i = 0; i < GEMOJICOUNT; i++)
		updateGEmojis(&goodEmojis[i]);

}

// Draws the game each frame
void drawGame() {

	drawPlayer();
	drawCrush();
	// Draw all the playerbullets
	for (int i = 0; i < PBULLETCOUNT; i++)
		drawPBullet(&pbullets[i]);

	// Draw all the enemies
	for (int i = 0; i < ENEMIESCOUNT; i++)
		drawEnemy(&enemies[i]);
	for (int i = 0; i < LIVESCOUNT; i++)
		drawLives(&lives[i]);
	for (int i = 0; i < MCOUNT; i++)
		drawMediocre(&mediocres[i]);
	for (int i = 0; i < GEMOJICOUNT; i++)
		drawGEmojis(&goodEmojis[i]);

	waitForVBlank();
	DMANow(3, shadowOAM, OAM, 128*4);
	REG_BG0HOFF = hOff;
    REG_BG0VOFF = vOff;
}

// Initialize the player
void initPlayer() {

	player.worldRow = 80;
	player.worldCol = 45;
	player.cdel = 1;
	player.rdel = 1;
	player.height = 16;
	player.width = 16;
	player.index = 0;
	player.bulletTimer = 10;
	player.curFrame = 0;
	player.cDirection = 1;
	player.screenRow = player.worldRow - vOff;
	player.screenCol = player.worldCol - hOff;
}

// Handle every-frame actions of the player
void updatePlayer() {
	// Move the player
	if (BUTTON_HELD(BUTTON_LEFT)) {
		if (player.worldCol > 0) {
			if (collisionmapBitmap[OFFSET(player.worldRow , player.worldCol - 1, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(player.worldRow + player.height -1, player.worldCol - 1, MAPWIDTH)]) {
				player.worldCol -= 2;
			}
			if (hOff > 0 && player.screenCol <= SCREENWIDTH / 2) {
                // Update background offset variable if the above is true
    			hOff -= 2;
      	    }
		}
	} else if (BUTTON_HELD(BUTTON_RIGHT)) {
		if ((player.worldCol + player.width) < 512) {
			if (collisionmapBitmap[OFFSET(player.worldRow, player.worldCol + player.width, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(player.worldRow + player.height - 1, player.worldCol + player.width, MAPWIDTH)]) {
				player.worldCol += 2;
			}
			if ((hOff + SCREENWIDTH < 512) && (player.screenCol + player.width) >= SCREENWIDTH / 2) {
       
                // Update background offset variable if the above is true
    			hOff += 2;
        	}
        }
	} else if (BUTTON_HELD(BUTTON_UP)) {
		if (player.worldRow > 0) {
			if (collisionmapBitmap[OFFSET(player.worldRow - 1, player.worldCol, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(player.worldRow - 1, player.worldCol + player.width - 1, MAPWIDTH)]) {
				player.worldRow -= 2; 
			}
			if (vOff > 0 && player.screenRow <= SCREENHEIGHT / 2) {
	    			vOff -= 2;
	        }
	    }
    } else if (BUTTON_HELD(BUTTON_DOWN)) {
    	if (player.worldRow + player.height < 512) {
    		if (collisionmapBitmap[OFFSET(player.worldRow + player.height, player.worldCol, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(player.worldRow + player.height, player.worldCol + player.width - 1, MAPWIDTH)]) {
    			player.worldRow += 2;
   			}
    		if ((vOff + SCREENHEIGHT < 512) && (player.screenRow + player.height - 1) >= 80) {
                // Update background offset variable if the above is true
    			vOff += 2;
            }
    	}
    }

    player.screenRow = player.worldRow - vOff;
    player.screenCol = player.worldCol - hOff;



	// Fire bullets
	if (cheat != 1 && BUTTON_PRESSED(BUTTON_A) && player.bulletTimer >= 7) {

		firePBullet();
		player.bulletTimer = 0;
		playSoundB(SHOOT, SHOOTLEN, SHOOTFREQ, 0);
	}

	player.bulletTimer++;
	for (int i = 0; i < ENEMIESCOUNT; i++) {
		if (cheat == 0 && enemies[i].active && collision(player.worldRow, player.worldCol, player.height, player.width,
			enemies[i].worldRow + 3, enemies[i].worldCol + 3, enemies[i].height - 3, enemies[i].width - 3)) {
			enemies[i].active = 0;
			enemiesRemaining--;
			livesRemaining--;
			lives[livesRemaining].active = 0;
			playSoundB(breakSound, BREAKSOUNDLEN, BREAKSOUNDFREQ, 0);
			cheat = 0;
			break;
		}
	}

	for (int i = 0; i < GEMOJICOUNT; i++) {
		if (goodEmojis[i].active && collision(player.worldRow, player.worldCol, player.height, player.width,
			goodEmojis[i].worldRow, goodEmojis[i].worldCol, goodEmojis[i].height, goodEmojis[i].width)) {
			goodEmojis[i].active = 0;
			lives[livesRemaining].active = 1;
			livesRemaining++;
			playSoundB(gmae, GMAELEN, GMAEFREQ, 0);
			break;
		}
	}


	
	animatePlayer();
}

// Handle player animation states
void animatePlayer() {

	if (player.aniCounter % 40 == 0) {
		player.curFrame = 0;
		crush.curFrame = 2;
		cheat = 0;
	}
	if (BUTTON_HELD(BUTTON_B)) {
        player.curFrame = 2;
        cheat = 1;
    }
    if (BUTTON_HELD(BUTTON_A) && cheat != 1) {
        player.curFrame = 1;
    }
    if (BUTTON_HELD(BUTTON_L)) {
    	crush.curFrame = 1;
    } else if (collided == 1) {
    	player.curFrame = 3;
    	playSoundB(breakSound, BREAKSOUNDLEN, BREAKSOUNDFREQ, 0);
    	//waitForVBlank();
    	collided = 0;
    } else {
        player.aniCounter++;
        //cheat = 0;
    }
}
	

// Draw the player
void drawPlayer() {

		shadowOAM[0].attr0 = (player.screenRow & ROWMASK);
		shadowOAM[0].attr1 = (player.screenCol & COLMASK) | ATTR1_SMALL;
		shadowOAM[0].attr2 = ATTR2_TILEID((player.curFrame) * 2, 0);
}

void initCrush() {
	crush.worldRow = 196;
	crush.worldCol = 109;
	crush.cdel = 1;
	crush.rdel = 1;
	crush.height = 16;
	crush.width = 16;
	crush.bulletTimer = 10;
	crush.index = 100;
	crush.curFrame = 2;
	crush.screenRow = crush.worldRow - vOff;
	crush.screenCol = crush.worldCol - hOff;
}

void updateCrush() {
	if (!(collisionmapBitmap[OFFSET(crush.worldRow - 1, crush.worldCol, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(crush.worldRow - 1, crush.worldCol + crush.width - 1, MAPWIDTH)]) 
		  || !(collisionmapBitmap[OFFSET(crush.worldRow + crush.height, crush.worldCol, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(crush.worldRow + crush.height, crush.worldCol + crush.width - 1, MAPWIDTH)])) {
		crush.rdel *= -1;
	} if (!(collisionmapBitmap[OFFSET(crush.worldRow, crush.worldCol - 1, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(crush.worldRow + crush.height -1, crush.worldCol - 1, MAPWIDTH)])
		|| !(collisionmapBitmap[OFFSET(crush.worldRow, crush.worldCol + crush.width, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(crush.worldRow + crush.height - 1, crush.worldCol + crush.width, MAPWIDTH)])) {
		crush.cdel *= -1;
	}
	crush.worldCol += crush.cdel;
	crush.worldRow += crush.rdel;

	crush.screenRow = crush.worldRow - vOff;
    crush.screenCol = crush.worldCol - hOff;

	for (int i = 0; i < PBULLETCOUNT; i++) {
			if (pbullets[i].active && collision(crush.worldRow, crush.worldCol, crush.height, crush.width,
				pbullets[i].worldRow, pbullets[i].worldCol, pbullets[i].height, pbullets[i].width)) {
					won = 1;
			}
		}


}

void drawCrush() {
	if (crush.screenRow > -crush.height && crush.screenCol > -crush.width 
		&& crush.screenRow < SCREENHEIGHT && crush.screenCol < SCREENWIDTH) {
		shadowOAM[crush.index].attr0 = (crush.screenRow & ROWMASK);
		shadowOAM[crush.index].attr1 = (crush.screenCol & COLMASK)| ATTR1_SMALL;
		shadowOAM[crush.index].attr2 = ATTR2_TILEID(2, crush.curFrame * 2);
	} else {
		shadowOAM[crush.index].attr0 = ATTR0_HIDE;
	}
}

void initMediocre() {
	for (int i = 0; i < MCOUNT; i++) {

		mediocres[i].worldRow = 350;
		mediocres[i].worldCol = 40 + (i * 40);
		mediocres[i].cdel = 1;
		mediocres[i].rdel = 1;
		mediocres[i].height = 16;
		mediocres[i].width = 16;
		mediocres[i].bulletTimer = 10;
		mediocres[i].index = 101 + i;
		mediocres[i].active = 1;
		mediocres[i].screenRow = mediocres[i].worldRow - vOff;
		mediocres[i].screenCol = mediocres[i].worldCol - hOff;
	}
	
}

void updateMediocre(ANISPRITE* m) {

	if (!(collisionmapBitmap[OFFSET(m->worldRow, m->worldCol - 1, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(m->worldRow + m->height -1, m->worldCol - 1, MAPWIDTH)])
		|| !(collisionmapBitmap[OFFSET(m->worldRow, m->worldCol + m->width, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(m->worldRow + m->height - 1, m->worldCol + m->width, MAPWIDTH)])) {
		 	m->cdel *= -1;
	} if (!(collisionmapBitmap[OFFSET(m->worldRow - 1, m->worldCol, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(m->worldRow - 1, m->worldCol + m->width - 1, MAPWIDTH)]) 
		  || !(collisionmapBitmap[OFFSET(m->worldRow + m->height, m->worldCol, MAPWIDTH)] && 
    				collisionmapBitmap[OFFSET(m->worldRow + m->height, m->worldCol + m->width - 1, MAPWIDTH)])) {
		m->rdel *= -1;
	}
	m->worldRow += m->rdel;
	m->worldCol += m->cdel;
	m->screenRow = m->worldRow - vOff;
    m->screenCol = m->worldCol - hOff;

	for (int i = 0; i < PBULLETCOUNT; i++) {
			if (pbullets[i].active && collision(m->worldRow, m->worldCol, m->height, m->width,
				pbullets[i].worldRow, pbullets[i].worldCol, pbullets[i].height, pbullets[i].width)) {
				pbullets[i].active = 0;
				livesRemaining--;
				lives[livesRemaining].active = 0;
				collided = 1;
				break;
			}
	}
}

void drawMediocre(ANISPRITE* m) {
	if (m->screenRow > -(m->height) && m->screenCol > -(m->width) 
		&& m->screenRow < SCREENHEIGHT && m->screenCol < SCREENWIDTH && m->active) {
			shadowOAM[m->index].attr0 = (m->screenRow & ROWMASK);
			shadowOAM[m->index].attr1 = (m->screenCol & COLMASK) | ATTR1_SMALL;
			shadowOAM[m->index].attr2 = ATTR2_TILEID(2, 4);
		} else {
			shadowOAM[m->index].attr0 = ATTR0_HIDE;
		}
}

// Initialize the pool of bullets
void initPBullets() {

	for (int i = 0; i < PBULLETCOUNT; i++) {

		pbullets[i].height = 16; // Varies size for testing drawRect
		pbullets[i].width = 16;    // Varies size for testing drawRect
		pbullets[i].worldRow = 0;
		pbullets[i].worldCol = 0;
		pbullets[i].rdel = 0;
        pbullets[i].cdel = 2;
		pbullets[i].active = 0;
		pbullets[i].index = 31 + i;
		pbullets[i].screenRow = pbullets[i].worldRow - vOff;
		pbullets[i].screenCol = pbullets[i].worldCol - hOff;
	}
}


// Spawn a bullet
void firePBullet() {

	// Find the first inactive bullet
	for (int i = 0; i < PBULLETCOUNT; i++) {
		if (!pbullets[i].active) {

			// Position the new bullet

			pbullets[i].worldRow = player.worldRow;
			pbullets[i].worldCol = player.worldCol + player.width/2
				- pbullets[i].width/2;
			pbullets[i].screenRow = player.worldRow - vOff;
			pbullets[i].screenCol = player.worldCol - hOff;

            // Slant it in the direction of player movement
            pbullets[i].cdel = player.cDirection;

			// Take the bullet out of the pool
			pbullets[i].active = 1;

			// Break out of the loop
			break;
		}
	}
}


// Handle every-frame actions of a bullet
void updatePBullet(ANISPRITE* b) {

	// If active, update; otherwise ignore
	if (b->active && b->screenCol + b->width < SCREENWIDTH-1) {

			//b->worldRow += b->rdel;
            b->worldCol += b->cdel;
            b->screenRow = b->worldRow - vOff;
   	 		b->screenCol = b->worldCol - hOff;
	} else {
		b->active = 0;
	}
}


// Draw a bullet
void drawPBullet(ANISPRITE* b) {

	if(b->active && b->screenRow > -(b->height) && b->screenCol > -(b->width) 
		&& b->screenRow < SCREENHEIGHT && b->screenCol < SCREENWIDTH) {
		shadowOAM[b->index].attr0 = (b->screenRow & ROWMASK);
		shadowOAM[b->index].attr1 = (b->screenCol & COLMASK) | ATTR1_SMALL;
		shadowOAM[b->index].attr2 = ATTR2_TILEID(2, 6);
	} else {
		b->active = 0;
		shadowOAM[b->index].attr0 = ATTR0_HIDE;
	}
}



// Initialize the enemies
void initEnemy() {

	for (int i = 0; i < ENEMIESCOUNT; i++) {

		enemies[i].height = 16;
		enemies[i].width = 16;
		enemies[i].worldRow = (rand() % (MAPHEIGHT - 20));
		enemies[i].worldCol = (rand () % (MAPWIDTH - 20));
		enemies[i].rdel = 1;
		enemies[i].cdel = 1;
		enemies[i].active = 1;
		enemies[i].index = i + 1;
		enemies[i].aniCounter = 0;
    	enemies[i].curFrame = 0;
    	enemies[i].numFrames = 1;
    	enemies[i].aniState = rand() % 2;
    	enemies[i].screenRow = enemies[i].worldRow - vOff;
		enemies[i].screenCol = enemies[i].worldCol - hOff;

	}
}

// Handle every-frame actions of a enemy
void updateEnemy(ANISPRITE* e) {


	if (e->active) {

		//Bounce the enemy off the sides of the box
		if (e->worldRow <= 1 || e->worldRow + e->height -1 >= MAPHEIGHT - 1)
			e->rdel *= -1;
		if (e->worldCol <= 1 || e->worldCol + e->width-1 >= MAPWIDTH - 1) {
		 	e->cdel *= -1;
		 }

		// Move the enemy
		e->worldRow += e->rdel;
		e->worldCol += e->cdel;
		e->screenRow = e->worldRow - vOff;
		e->screenCol = e->worldCol - hOff;

	}
}

void drawEnemy(ANISPRITE* e) {

	if (e->screenRow > -(e->height) && e->screenCol > -(e->width) 
		&& e->screenRow < SCREENHEIGHT && e->screenCol < SCREENWIDTH && e->active) {
			shadowOAM[e->index].attr0 = (e->screenRow & ROWMASK);
			shadowOAM[e->index].attr1 = (e->screenCol & COLMASK) | ATTR1_SMALL;
			shadowOAM[e->index].attr2 = ATTR2_TILEID(0, 4);
	} else {
		shadowOAM[e->index].attr0 = ATTR0_HIDE;
	}
	
}


void initLives() {
	for (int i = 0; i < LIVESCOUNT; i++) {

		lives[i].height = 16; 
		lives[i].width = 16;
		lives[i].worldRow = 145;
		lives[i].worldCol = i * 14;
		lives[i].rdel = 0;
        lives[i].cdel = 0;
        lives[i].active = 1;
		lives[i].index = 60 + i;
		lives[i].screenRow = lives[i].worldRow - vOff;
		lives[i].screenCol = lives[i].worldCol - hOff;
	}

	for (int j = 4; j > 2; j--) {
		lives[j].active = 0;
	}
}

void drawLives(ANISPRITE* l) {
	if(l->active) {
		shadowOAM[l->index].attr0 = (l->worldRow & ROWMASK);
		shadowOAM[l->index].attr1 = (l->worldCol & COLMASK) | ATTR1_SMALL;
		shadowOAM[l->index].attr2 = ATTR2_TILEID(0, 6) | ATTR2_PALROW(0);
	} else {
		shadowOAM[l->index].attr0 = ATTR0_HIDE;
	}
}

void initGEmojis() {
	for (int i = 0; i < GEMOJICOUNT; i++) {

		goodEmojis[i].height = 16; 
		goodEmojis[i].width = 16;
		goodEmojis[i].worldRow = rand() % (MAPHEIGHT - 20);
		goodEmojis[i].worldCol = rand() % (MAPWIDTH -20);
		goodEmojis[i].rdel = 1;
        goodEmojis[i].cdel = 1;
		goodEmojis[i].active = 1;
		goodEmojis[i].index = 105 + i;
		goodEmojis[i].screenRow = goodEmojis[i].worldRow - vOff;
		goodEmojis[i].screenCol = goodEmojis[i].worldCol - hOff;
	}

}




void updateGEmojis(ANISPRITE* e) {

	//Bounce the enemy off the sides of the box
	if (e->worldRow <= 1 || e->worldRow + e->height -1 >=MAPHEIGHT - 1)
		e->rdel *= -1;
	if (e->worldCol <= 1 || e->worldCol + e->width-1 >= MAPWIDTH - 1) {
		 e->cdel *= -1;
		}

		// Move the enemy
	e->worldRow += e->rdel;
	e->worldCol += e->cdel;
	e->screenRow = e->worldRow - vOff;
    e->screenCol = e->worldCol - hOff;

}


void drawGEmojis(ANISPRITE* e) {

	if (e->screenRow > -(e->height) && e->screenCol > -(e->width) 
		&& e->screenRow < SCREENHEIGHT && e->screenCol < SCREENWIDTH && e->active) {
		shadowOAM[e->index].attr0 = (e->screenRow & ROWMASK);
		shadowOAM[e->index].attr1 = (e->screenCol & COLMASK) | ATTR1_SMALL;
		shadowOAM[e->index].attr2 = ATTR2_TILEID(0, 2);
	} else {
		shadowOAM[e->index].attr0 = ATTR0_HIDE;
	}
}