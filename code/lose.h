
//{{BLOCK(lose)

//======================================================================
//
//	lose, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 601 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 19232 + 2048 = 21792
//
//	Time-stamp: 2019-04-17, 21:51:42
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LOSE_H
#define GRIT_LOSE_H

#define loseTilesLen 19232
extern const unsigned short loseTiles[9616];

#define loseMapLen 2048
extern const unsigned short loseMap[1024];

#define losePalLen 512
extern const unsigned short losePal[256];

#endif // GRIT_LOSE_H

//}}BLOCK(lose)
