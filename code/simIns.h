
//{{BLOCK(simIns)

//======================================================================
//
//	simIns, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 3 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 96 + 2048 = 2656
//
//	Time-stamp: 2019-04-25, 23:10:43
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SIMINS_H
#define GRIT_SIMINS_H

#define simInsTilesLen 96
extern const unsigned short simInsTiles[48];

#define simInsMapLen 2048
extern const unsigned short simInsMap[1024];

#define simInsPalLen 512
extern const unsigned short simInsPal[256];

#endif // GRIT_SIMINS_H

//}}BLOCK(simIns)
