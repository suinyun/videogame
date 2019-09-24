// Constants
#define PBULLETCOUNT 15
#define ENEMIESCOUNT 2
#define LIVESCOUNT 5
#define MCOUNT 4
#define GEMOJICOUNT 2
#define MAPHEIGHT 512
#define MAPWIDTH 512
#define NUMOBJS 5




//variables
extern int hOff;
extern int vOff;
extern ANISPRITE player;
extern ANISPRITE crush;
extern ANISPRITE mediocres[MCOUNT];
extern ANISPRITE lives[LIVESCOUNT];
extern ANISPRITE pBullets[PBULLETCOUNT];
extern ANISPRITE enemies[ENEMIESCOUNT];
extern ANISPRITE goodEmojis[GEMOJICOUNT];
extern int enemiesRemaining;
extern int livesRemaining;
extern int collided;
extern int won;



// Custom Game Colors
#define NUMCOLORS 6
// This does an enum trick to make them the last indeces of the palette
enum {BLACKID=(256-NUMCOLORS), BLUEID, GREENID, REDID, WHITEID, GRAYID};
extern unsigned short colors[NUMCOLORS];

// Prototypes
void initGame();
void updateGame();
void drawGame();

void initPlayer();
void updatePlayer();
void drawPlayer();
void animatePlayer();

void initCrush();
void updateCrush();
void drawCrush();

void initMediocre();
void updateMediocre();
void drawMediocre();

void initPBullets();
void firePBullet();
void updatePBullet(ANISPRITE *);
void drawPBullet(ANISPRITE *);

void initEnemy();
void updateEnemy(ANISPRITE *);
void drawEnemy(ANISPRITE *);

void initLives();
void drawLives();

void initGEmojis();
void updateGEmojis(ANISPRITE *);
void drawGEmojis(ANISPRITE *);

void setupSounds();
void playSoundA( const unsigned char* sound, int length, int frequency, int loops);
void playSoundB( const unsigned char* sound, int length, int frequency, int loops);

void setupInterrupts();
void interruptHandler();

void pauseSound();
void unpauseSound();
void stopSound();
