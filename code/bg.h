
//{{BLOCK(bg)

//======================================================================
//
//	bg, 512x512@4, 
//	+ palette 256 entries, not compressed
//	+ 1023 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x64 
//	Total size: 512 + 32736 + 8192 = 41440
//
//	Time-stamp: 2019-04-24, 18:22:17
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG_H
#define GRIT_BG_H

#define bgTilesLen 32736
extern const unsigned short bgTiles[16368];

#define bgMapLen 8192
extern const unsigned short bgMap[4096];

#define bgPalLen 512
extern const unsigned short bgPal[256];

#endif // GRIT_BG_H

//}}BLOCK(bg)
