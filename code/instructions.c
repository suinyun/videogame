
//{{BLOCK(instructions)

//======================================================================
//
//	instructions, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 214 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 6848 + 2048 = 9408
//
//	Time-stamp: 2019-04-25, 23:11:28
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short instructionsTiles[3424] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0xFF00,0x0000,0xFFF0,
	0x0000,0xFFFF,0xF000,0xFFFF,0xFF00,0xDDFF,0xFFF0,0xDDFF,
	0xFFF0,0xFFFF,0xFFFF,0xFFFF,0xDDFF,0xDDDD,0xDDFF,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,

	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFDDD,0xDDDD,0xFDDD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDF,0xDDDD,0xDDFF,0xFFDD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFDD,0xDDDD,0xFFDD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xFFFD,0xDDDD,0xFFFF,0xFDDF,0xFFFF,0xFDDF,0xDDFF,

	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDFF,0xDDDD,0xDFFF,0xDDDD,0xFFFF,0xDDDD,0xDFDD,0xDDDD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFDDD,0xFFFF,0xFFFF,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDF,0xFDDD,0xFFFF,0xFFDD,0xFFFF,0xFFFD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xFFFD,0xDDFF,0xFFFF,0xDFFF,0xFFFF,0xFFFF,0xDDFF,0xFFFD,

	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDFFD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDFD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,

	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDF,0xDDFF,0xDDDF,0xDFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDFF,0xDDDD,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xFDDD,0xDDDD,0xFFDD,0xDFFF,0xFFFD,0xDFFF,0xFFFD,

	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xFFFF,0xDDDD,0xFFFF,0xDDDF,0xFFFF,0xDDFF,0xDDDD,0xDDDF,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0xFFDD,0xDDDD,0xFFDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xF000,0xFFFF,
	0xF000,0xFFFF,0xF000,0xCCCF,0xF000,0xCCCF,0xF000,0xCCCF,
	0xFFF0,0xDDDD,0xFFFF,0xDDDD,0xDDFF,0xDDDD,0xDDFF,0xDDDD,
	0xDDFF,0xDDDD,0xDDFF,0xDDDD,0xFFFF,0xDDDD,0xFFFC,0xDDDD,

	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xFDDD,0xDDDD,0xFDDD,0xDDDD,0xFDDD,0xDDDD,0xFDDD,
	0xDDDD,0xFDDD,0xDDDD,0xFDDD,0xDDDD,0xFDDD,0xDDDD,0xFDDD,
	0xDDFF,0xFFDD,0xDDFF,0xFFFD,0xDDFF,0xFFFD,0xDDFF,0xFFFD,
	0xDDFF,0xFFFD,0xDDFF,0xFFFD,0xDDFF,0xFFFD,0xDDFF,0xFFFD,
	0xDDDD,0xFFDD,0xDDFF,0xFFDD,0xDFFF,0xFFDD,0xFFFF,0xFFDD,
	0xFFFD,0xFFDD,0xFFFD,0xFFFF,0xFFDD,0xFFFF,0xFDDD,0xFFFF,

	0xFDDF,0xDDFF,0xFDDF,0xFFFF,0xDDDF,0xFFFF,0xDDDF,0xFFFD,
	0xDDDF,0xFDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xFDDD,0xDDDD,0xFFDD,0xDDDF,0xFDDD,0xDFFF,0xDDDD,
	0xFFFF,0xDDDD,0xFFFF,0xDDDF,0xFFDD,0xDDDF,0xFFDD,0xDDFF,
	0xFFFF,0xFFFF,0xDFFF,0xFFFD,0xDDDD,0xFFFD,0xDDDD,0xFFFD,
	0xDDDD,0xFFFD,0xDDDD,0xFFFD,0xDDDD,0xFFFD,0xDDDD,0xFFFD,
	0xDDDD,0xFFFD,0xDDDD,0xDFFD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,

	0xDFFF,0xFFFD,0xDFFF,0xFFFD,0xDFFF,0xFFFF,0xFFFF,0xDFFF,
	0xFFFF,0xDFFF,0xFFFF,0xDDFF,0xFFFF,0xDFFF,0xFFFF,0xFFFF,
	0xDDDD,0xFFFD,0xDDDD,0xFFFD,0xDDDD,0xFFFD,0xDDDD,0xFFFD,
	0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,
	0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,
	0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xFFDD,0xDFFF,
	0xFDDD,0xFFFF,0xFFDD,0xFFFF,0xFFFD,0xDDDF,0xFFFD,0xDDDD,
	0xFFFD,0xDDDD,0xFFFD,0xDDDD,0xFFFD,0xDDDD,0xFFFD,0xFDFF,

	0xDDDD,0xFFFF,0xFDDD,0xFFFF,0xDDDD,0xDDDF,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDFF,0xDDDD,
	0xFFFF,0xDDDF,0xFFDD,0xDDDF,0xFFDD,0xDDDF,0xFFDD,0xDDDF,
	0xFFDD,0xDDDF,0xFFDD,0xDDDF,0xFFDD,0xDDDF,0xFFDD,0xDDDF,
	0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,
	0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xDFFF,
	0xFDDD,0xFFFF,0xFDDD,0xFFFF,0xFFDD,0xDDFF,0xFFDD,0xDDDF,
	0xFFDD,0xDDDF,0xFFDD,0xDDDF,0xFFDD,0xDDDF,0xFFDD,0xFFFF,

	0xFFFF,0xDDDD,0xFFFF,0xFDDF,0xFFDD,0xFDDF,0xFFDD,0xFDDF,
	0xFFDD,0xFDDF,0xFFDD,0xFDDF,0xFFFD,0xFDDF,0xFFFF,0xFDDD,
	0xDDFF,0xDDDD,0xFFFF,0xDDDD,0xFFFF,0xDDDF,0xFFFF,0xDDFF,
	0xFDFF,0xDDFF,0xFDFF,0xFFFF,0xDDFF,0xFFFF,0xDDFF,0xFFFD,
	0xDFFF,0xFFFD,0xDFFF,0xFFFD,0xDFFF,0xFFDD,0xDFFF,0xFDDD,
	0xDFFF,0xDDDD,0xDDFF,0xDDDD,0xDDFF,0xDDDD,0xDDFF,0xDDDD,
	0xDDDD,0xDDDD,0xDDFF,0xDDDD,0xDFFF,0xDDDD,0xFFFF,0xDDDF,
	0xFFFD,0xDDFF,0xFFDD,0xDFFF,0xDDDD,0xDFFF,0xDDDD,0xFFFF,

	0xDDDD,0xFFFF,0xDDDD,0xFFFF,0xDDDD,0xFFDD,0xDDDD,0xFFDD,
	0xDDDD,0xFFDD,0xDDDD,0xFFDD,0xDDDD,0xFFFF,0xDDDD,0xFFFF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0x000F,
	0xFFFF,0x000F,0xFCCE,0x000F,0xFCCE,0x000F,0xFCCE,0x000F,
	0xF000,0xCCCF,0xF000,0xCCCF,0xF000,0xCCCF,0xF000,0xCCCF,
	0xF000,0xCCCF,0xF000,0xCCCF,0xF000,0xCCCF,0xF000,0xCCCF,
	0xFFFC,0xDDFF,0xFFCC,0xDDFF,0xFCCC,0xFFFF,0xCCCC,0xFFFF,
	0xCCCC,0xFFFC,0xCCCC,0xFFCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,

	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDFF,0xDDDD,0xDDFF,0xDDDD,0xFFFF,0xFFFF,0xFFFC,0xFFFF,
	0xDFFF,0xFFFD,0xDDFF,0xFFFD,0xDDDD,0xFFDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDDDD,0xFFFF,0xDDDD,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDDDD,0xDDFD,0xDDDD,0xFFFF,0xDDDD,0xFFFF,0xDDDD,0xFFFD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,

	0xFFDD,0xDDFF,0xFFFF,0xDDDF,0xFFFF,0xDDDF,0xFFFF,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDDDD,0xFFFD,0xDDDD,0xFFFD,0xDDDD,0xDFFD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDFFF,0xFFFF,0xDFFF,0xFFDD,0xDFFF,0xFDDD,0xDFFD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDDFF,0xFFFF,0xDFFF,0xFFFD,0xDDFF,0xFFDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,

	0xFFFF,0xDDFF,0xFFFF,0xDDDF,0xDFFF,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFDD,0xFFFF,0xFDDD,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDDFF,0xDDDD,0xDDDF,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFDD,0xDDDF,0xFFDD,0xDDDF,0xFFDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,

	0xDDDD,0xFFFD,0xDDDD,0xDFFD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFDDD,0xFFFF,0xDDDD,0xFFFF,0xDDDD,0xDFDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDFFF,0xFDDD,0xDDFF,0xFDDD,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDDFF,0xFFDD,0xDDFF,0xFFDD,0xDDFF,0xDDDD,0xDDDD,0xDDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,

	0xDDFF,0xFDDD,0xDDFF,0xFFDD,0xDDDD,0xFFDD,0xDDDD,0xFDDD,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xDDDD,0xFFFF,0xFFFF,0xDFFF,0xFFFF,0xDFFF,0xFFFF,0xDDFF,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
	0xFFDD,0xEFFF,0xFFDD,0xEEFF,0xFFFF,0xEEEF,0xFFFF,0xCEEE,
	0xEFFF,0xCCEE,0xEEFF,0xCCCE,0xEEEE,0xCCCC,0xCEEE,0xCCCC,
	0xFCCE,0x00EF,0xFCCE,0x0EEF,0xFCCC,0xEEEF,0xFCCC,0xEEEF,
	0xFCCC,0xEEEF,0xFCCC,0xEEEF,0xFCCC,0xEEEF,0xFCCC,0xEEEF,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xEEEE,0xCCCC,0xEECC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xEEEE,0xEEEE,0xEEEE,0xCEEE,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,

	0xCCCE,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xFCCC,0xEEEF,0xFCCC,0xEEEF,0xFCCC,0xEEEF,0xFCCC,0xEEEF,
	0xFCCC,0xEEEF,0xFCCC,0xEEEF,0xFCCC,0xEEEF,0xFCCC,0xEEEF,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11CC,0x1111,0x11CC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11C1,0xCCCC,0x11CC,0xCCCC,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xCCC1,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCC11,0xCCCC,0xCC11,0xCCCC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0x1111,0x11CC,0xCCCC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,

	0xCCCC,0xCCCC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,
	0xCCCC,0xCCCC,0xC111,0x1CCC,0x11CC,0x11CC,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x1CCC,
	0x11CC,0xCCCC,0x1111,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,0x1111,0xCCCC,
	0xCCCC,0xCCCC,0xC11C,0x1CCC,0xC11C,0x1CCC,0x11CC,0x11CC,
	0x11CC,0x11CC,0x1CCC,0xC111,0x1CCC,0xC111,0xCCCC,0xCC11,

	0xCCCC,0xCCCC,0x1CC1,0xC111,0x11C1,0x11CC,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x1CCC,0xC111,
	0xCCCC,0xCCCC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x1CCC,0x1111,
	0xCCCC,0xCCCC,0x11CC,0xCC11,0x11CC,0xCCC1,0x11CC,0xCCCC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,
	0x1CCC,0xCCC1,0x11CC,0x1C11,0x1CCC,0x1CC1,0x1CCC,0x1CC1,
	0x1CCC,0x1CC1,0x1CCC,0x1CC1,0x1CCC,0x1CC1,0xCCCC,0x1C11,

	0xCCCC,0xCCCC,0xC111,0xCC11,0xCC11,0xCC11,0xCCC1,0xCC11,
	0xCCC1,0xCC11,0xCCC1,0xCC11,0xCCC1,0xCC11,0xCCC1,0x111C,
	0xCCCC,0xCCCC,0xCC11,0x111C,0xCC11,0xCC11,0xCC11,0xCC11,
	0xCC11,0x1111,0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,0x111C,
	0xCCCC,0xCCCC,0xCCC1,0xCCCC,0xCC11,0xCCCC,0xCC11,0xCCCC,
	0xCCC1,0xCCCC,0xCCCC,0xCCCC,0xCC11,0xCCCC,0xCCC1,0xCCCC,
	0xCC11,0xCCCC,0xCC11,0x111C,0xCC11,0xCC11,0xCC11,0xCC11,
	0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,0x111C,

	0xCCCC,0xCCCC,0x1CC1,0xCCC1,0x1C11,0xCCC1,0xCC11,0xCC11,
	0xCC11,0xCC11,0xCC11,0x111C,0xCC11,0x11CC,0xCCC1,0x11CC,
	0xCCCC,0xCCCC,0xC11C,0x111C,0xC11C,0xCC11,0xCC11,0xCC11,
	0xCC11,0x1111,0xCCC1,0xCC11,0xCCCC,0xCC11,0xCCCC,0x111C,
	0xCCCC,0xCC11,0xCCC1,0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,
	0xCCC1,0xCC11,0xCCCC,0xCCCC,0xCC11,0xCC11,0xCCC1,0xCC11,
	0xCCCC,0xCC11,0x1CCC,0xCCC1,0x11CC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCC11,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11CC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0x1CCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCC11,0xCCCC,0xC111,0xCCCC,0xC111,0xCCCC,0x1111,
	0xC111,0x1111,0xCCCC,0x1C11,0xCCCC,0x1C11,0xCCCC,0xCC11,

	0xCCCC,0xCC11,0x1CCC,0xCC11,0x1CCC,0xCC11,0x11CC,0xCC11,
	0x11CC,0xCC11,0xC111,0xCC11,0xC111,0xCC11,0xCC11,0xCC11,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x111C,0x1CC1,0xCC11,0x1C11,
	0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,0xCC11,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCC1,0xC11C,0xCCC1,0xC11C,
	0xCC11,0xCC11,0xCC11,0xCC11,0x111C,0xCCC1,0x11CC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x111C,0xCCC1,0xCC11,0xCC11,
	0xCC11,0xCC11,0x1111,0xCCC1,0xCC11,0xCCCC,0xCC11,0xCC11,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xCCC1,0x1CCC,0x1CC1,
	0xCCCC,0x1C11,0xCCCC,0x1C11,0xCCCC,0x111C,0xCCCC,0xC11C,
	0xCCCC,0x11CC,0xCCCC,0xCCCC,0x1CCC,0x11C1,0x1CC1,0x11C1,
	0x11C1,0x11CC,0x11C1,0x11CC,0xC111,0x11CC,0xC11C,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x111C,0x11C1,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xC111,0xCCCC,0x11CC,0xCCCC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xC111,0x11CC,0x11CC,
	0xCCCC,0x11CC,0x1CCC,0x1111,0x11CC,0x11CC,0x11CC,0x11CC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11CC,0x1C11,0x11CC,0x1CC1,
	0x11CC,0x1CCC,0x11CC,0x1CCC,0x11CC,0x1CCC,0x11CC,0x1CCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xC111,0x111C,0xCC11,0xCC11,
	0xCCC1,0xCC11,0xCCC1,0xCC11,0xCCC1,0xCC11,0xCCC1,0xCC11,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CC1,0xCCC1,0x1C11,0x1CC1,
	0xCC11,0x1C11,0xCC11,0x1C11,0xCC11,0x111C,0xCC11,0xC11C,

	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0x11CC,0x11CC,0xC11C,
	0x11CC,0xCC11,0x11CC,0xCCC1,0x11CC,0xCC11,0x11CC,0xC11C,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11CC,0xCC11,0xC11C,0xC11C,
	0xC11C,0xC11C,0x111C,0xCC11,0xC11C,0xCCCC,0xC11C,0xC11C,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCC11,0x11CC,0xCC11,0x11CC,
	0xC11C,0xC11C,0xC11C,0xC11C,0x11CC,0xCC11,0x11CC,0xCC11,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11CC,0xCC11,0xC11C,0xC11C,
	0x11CC,0xCCCC,0x1CCC,0xCCC1,0xCCCC,0xCC11,0xC11C,0xC11C,

	0xCCCC,0xCC11,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1111,
	0xCC11,0xCC11,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xC111,0xCCCC,
	0x111C,0xCCC1,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xC11C,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,

	0xC11C,0x11CC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCC11,0xCCCC,
	0x1CCC,0x11C1,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x1CCC,0x1111,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x11CC,0x1CCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11CC,0xCCCC,

	0xCCC1,0x111C,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCC1,0xC11C,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x11CC,0x11CC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x11CC,0xCC11,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xC111,

	0x1CCC,0xCCC1,0x1CCC,0xCCC1,0x11CC,0xCCCC,0xC11C,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x11CC,0xCC11,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCC11,0xCCCC,0xCC11,0xCCCC,0xCC11,0xCCCC,0xCC11,
	0xC111,0x1111,0xCCCC,0xCC11,0xCCCC,0xCC11,0xCCCC,0xCC11,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0x111C,0x11CC,0x111C,
	0xC111,0xC11C,0xCCCC,0xC11C,0xCCCC,0xC11C,0xCCCC,0xC11C,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CC1,0xC111,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0xC111,0x11CC,0xCCCC,0x11CC,0x11CC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xC111,0x11CC,0x11CC,
	0x1CCC,0xCCC1,0xCCCC,0xCC11,0xCCCC,0xC11C,0x11CC,0x11CC,
	0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xCCCC,0x1CCC,0xCCCC,0x11CC,
	0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,0xC11C,
	0xCC11,0xCCCC,0xC111,0xCCCC,0xC111,0xCCCC,0x11CC,0xCCCC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x1111,0xCCCC,0x1CCC,0xCCC1,

	0x11CC,0xCCCC,0x11CC,0xCCCC,0x111C,0x1CC1,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xC111,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xC111,0x11CC,0x11CC,
	0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,0x11CC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x111C,0xCCC1,0x11CC,0xCCCC,
	0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,

	0xCCCC,0x11CC,0xCCCC,0xC11C,0xCCCC,0xCC11,0x1CCC,0xCCC1,
	0x11CC,0xCCCC,0x1CCC,0xCCC1,0xCCCC,0xCC11,0xCCCC,0xC11C,
	0x11CC,0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0x1CCC,0xC111,
	0xCCCC,0x11CC,0xCCCC,0x11CC,0xCCCC,0x11CC,0x11CC,0x11CC,
	0x1CCC,0x1CC1,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xC111,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCC11,
	0xCCCC,0xCC11,0x11CC,0x1111,0xCCCC,0xCC11,0x1CCC,0xC111,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xCCC1,
	0x1CCC,0xCCC1,0x11CC,0xCC11,0x11CC,0xCC11,0xC11C,0xC11C,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCC11,0x11CC,0xCC11,0x11CC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x11CC,0xCC11,0xC11C,0xC11C,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xC11C,0xCCCC,
	0xC11C,0xCCCC,0xCCCC,0xCCCC,0xC11C,0x11CC,0xC11C,0xC11C,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xC11C,0xCCCC,
	0xC11C,0xCCCC,0xC11C,0xCCCC,0xC111,0xCCCC,0xC11C,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xC111,
	0x11CC,0x11CC,0xC11C,0x1CCC,0xC11C,0xCCCC,0xC11C,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1CCC,0xCCC1,
	0x1CCC,0xCCC1,0x1CC1,0xCCC1,0x1CCC,0x1111,0x1CCC,0x1CC1,

	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x1111,0x1CC1,0x1CC1,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x1CCC,0xCCC1,0x1CCC,0xCCC1,0x11CC,0xCC11,0x1CC1,0x1CC1,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0x11CC,0x1111,0xCCCC,0x1CC1,0x1CC1,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCC11,0xCCCC,
	0xCC11,0xCCCC,0x1111,0xCCCC,0xCC11,0xCCCC,0xC111,0xCCCC,

	0x1CCC,0xC1CC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xC11C,0xC11C,0xC11C,0xC11C,0x111C,0xC111,0xCC11,0x11CC,
	0xCC11,0x11CC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xC11C,0xC11C,0xC11C,0xC11C,0x11CC,0xCC11,0x1CCC,0xCCC1,
	0x1CCC,0xCCC1,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xC11C,0xC11C,0xC11C,0xC11C,0xC11C,0xC11C,0xC11C,0xC11C,
	0x11CC,0xCC11,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,

	0xC11C,0xC11C,0xC11C,0xC11C,0xC11C,0xC11C,0xC11C,0xC11C,
	0xC11C,0x11CC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xC11C,0xCCCC,0xC11C,0xCCCC,0xC11C,0xCCCC,0xC11C,0xCCCC,
	0xC111,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xC11C,0x111C,0xC11C,0x1CCC,0xC11C,0x1CCC,0x11CC,0x11CC,
	0x1CCC,0xC111,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x1CC1,0x1CC1,0x1CC1,0x1CC1,0x1CC1,0x1CC1,0x1CC1,0x1CC1,
	0x1CC1,0x1CC1,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,

	0x1CC1,0x1CC1,0x1CC1,0x1CC1,0x1CC1,0x1CC1,0x1CC1,0x1CC1,
	0xCCC1,0x1111,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCC1,0xCC11,0xCCC1,0xC11C,0xCCC1,0x11CC,0x1CC1,0x1CC1,
	0xCCCC,0x1111,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x1CCC,0xCCC1,0x1CCC,0xCCC1,0x1CCC,0xCCC1,0x1CC1,0x1CC1,
	0xCCCC,0xCC11,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCC11,0x1CCC,0xC11C,0xCCCC,0x11CC,0xCCCC,0x1CC1,0xCCC1,
	0x1111,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,

	0xC1CC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xF000,0xFFFF,0xF000,0xFFFF,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0xEEEE,0xEEE0,0xEEEE,
	0xEE00,0xEEEE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0xEEEE,0xEEEE,0xEEEE,
	0xEEEE,0xEEEE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0xFFFF,0xEEEF,0xFFFF,0xEEEF,0xEEEE,0xEEEE,0xEEEE,0xEEEE,
	0xEEEE,0xEEEE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0xF000,0xFFFF,0xFF00,0xFFFF,
	0x0F00,0x00FF,0x0000,0xF0FF,0x0000,0xFFFF,0x0000,0xFFFF,
	0x0000,0x0000,0x0000,0x0000,0x000F,0x0000,0x000F,0x0000,
	0x00FF,0x0000,0xF00F,0xFF0F,0xF00F,0xFFFF,0xF000,0x0FFF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xF00F,0x00FF,0xFF0F,0x0FFF,0xFF00,0x0FFF,0xFF00,0x00FF,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFF00,0x000F,0xFFF0,0x00FF,0x0FF0,0x00FF,0x0FF0,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFFF0,0x0000,0xFFFF,0x000F,0xF0FF,0x000F,0x00FF,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,
	0x0000,0xFFFF,0x0000,0x0FF0,0x0000,0xFFF0,0x0000,0xFFFF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x00FF,0x0000,
	0x000F,0x00F0,0x0000,0x0FF0,0x0FFF,0xFFF0,0x00FF,0xFFF0,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xF000,
	0x0000,0xF000,0x0FFF,0xF000,0x0FFF,0xFFF0,0x0FFF,0xFFF0,
	0x0000,0x0000,0x0000,0x0000,0x000F,0x0000,0x00FF,0x0000,
	0x000F,0xF000,0x000F,0xFF00,0xFFFF,0xFF00,0x0FFF,0xFF00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x00FF,0x0000,0x0FFF,0x0FF0,0x0FFF,0xFFF0,0x00FF,0xFFF0,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0F00,0x0000,0x0FFF,0x0000,0x00FF,0x0000,0x000F,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x000F,0xF000,0x00FF,
	0xF000,0x000F,0xF000,0x000F,0xFFF0,0xFFFF,0xFFF0,0x0FFF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xF000,0x00FF,0xFF00,0xFFFF,0xFF00,0xFFF0,0xFF00,0xFF00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFFF0,0x0000,0xFFFF,0xF000,0x00FF,0xF000,0x000F,0xF000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0FFF,0xF000,0xFFFF,0xF00F,0xFF0F,0xF00F,0xF00F,0xF00F,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0xFF0F,0x000F,0xFFFF,0xF00F,0xFFFF,0xF00F,
	0x0000,0x0000,0x0000,0x0000,0x0F00,0x0000,0xFFF0,0x0000,
	0x0FF0,0xF000,0x0FF0,0x0000,0xFFFF,0x00FF,0xFFFF,0x000F,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0FFF,0x0000,
	0xFFFF,0x00F0,0x0000,0x0FF0,0x0FF0,0xFFF0,0x0FF0,0xFFF0,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0FFF,0xFF00,0x0FFF,0xFF00,0x0FFF,0xFF00,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xF000,0xFF00,0xFF00,0xFF00,0xFF00,0xFFF0,0xFF00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x00FF,0x0000,0x0FFF,0x0000,0x0FFF,0x0000,0x00FF,0x0000,
	0x0000,0x0FFF,0x0000,0x00F0,0x0000,0x00F0,0x0000,0x00F0,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xF000,0x00FF,0xF000,0x00FF,0xF000,0x00FF,0x0000,0x000F,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0xFF00,0xFFF0,0xFF00,0x0FFF,0x0000,0x000F,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFFF0,0x000F,0xF000,0x00FF,0x0000,0x0FFF,0xFFF0,0x00FF,
	0xFFFF,0xF00F,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFFFF,0x0000,0xFF00,0x000F,0xF000,0x00FF,0xFFFF,0x000F,
	0xFFFF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0FF0,0x0000,0xFFF0,0x0000,0xFFF0,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0xFF00,0xFFF0,0xFFFF,0xFFF0,0x00FF,0x0FF0,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFF00,0xF000,0xFF00,0xF000,0x0000,0xF000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x000F,0xFF0F,0xFF0F,0xFF0F,0xFFFF,0x0000,0x00FF,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFFF0,0xFFF0,0x0FFF,0xFFF0,0x000F,0xFFF0,0x0000,0x0F00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0xF000,0x000F,0xF000,0xFF0F,0xF000,0xFFFF,0x0000,0x00FF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFF0F,0xFF00,0xFF0F,0xFFF0,0xFF00,0x0FFF,0xF000,0x00FF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x00FF,0xF000,0xFFFF,0xF0FF,0xFFF0,0xF00F,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xF00F,0xF00F,0xFF0F,0xF00F,0xFFFF,0xF000,0x0FFF,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x00FF,0x00FF,0x00FF,0x00FF,0x000F,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0FF0,0x0F00,0x0FF0,0x0FFF,0xFFF0,0x00FF,0xFF00,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0FF0,0xFFF0,0x0FF0,0xFFF0,0x0FF0,0x0FF0,0x0F00,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFF00,0xFF00,0xFF00,0xFF00,0x0000,0xFF00,0x0000,0xF000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0xFFF0,0xFF00,0xFFFF,0xFF00,0xF0FF,0x0000,0xF000,0x000F,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFFF0,0x0000,0x0FFF,0x0000,0x000F,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short instructionsMap[1024] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0001,0x0002,0x0003,0x0004,0x0005,0x0006,
	0x0007,0x0008,0x0009,0x000A,0x000B,0x0003,0x000C,0x000D,
	0x000E,0x000F,0x0010,0x0011,0x040E,0x0012,0x0013,0x0014,
	0x0003,0x0003,0x0015,0x0401,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0016,0x0017,0x0018,0x0018,0x0019,0x001A,0x001B,
	0x001C,0x001D,0x001E,0x001F,0x0020,0x0021,0x0022,0x0023,
	0x0024,0x0025,0x0026,0x0027,0x0028,0x0029,0x002A,0x002B,
	0x0018,0x0018,0x0018,0x002C,0x002D,0x0000,0x0000,0x0000,
	0x0000,0x002E,0x002F,0x0030,0x0803,0x0803,0x0031,0x0032,
	0x0033,0x0034,0x0035,0x0803,0x0036,0x0037,0x0038,0x0039,
	0x003A,0x003B,0x003C,0x003D,0x003E,0x003F,0x0040,0x0041,
	0x0803,0x0803,0x0815,0x0042,0x0043,0x0000,0x0000,0x0000,

	0x0000,0x002E,0x0044,0x0045,0x0046,0x0046,0x0046,0x0046,
	0x0046,0x0046,0x0046,0x0046,0x0046,0x0046,0x0046,0x0046,
	0x0046,0x0046,0x0046,0x0046,0x0046,0x0046,0x0046,0x0046,
	0x0046,0x0046,0x0047,0x0048,0x0049,0x0000,0x0000,0x0000,
	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0044,0x004A,
	0x004B,0x0044,0x004C,0x0044,0x0044,0x0044,0x0044,0x004D,
	0x0044,0x0044,0x0044,0x004E,0x0044,0x0044,0x044C,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,

	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0044,0x004F,
	0x0050,0x0051,0x0052,0x0053,0x0054,0x0055,0x0056,0x0057,
	0x0058,0x0059,0x005A,0x005B,0x005C,0x005D,0x005E,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,
	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x005F,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,

	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0060,0x0060,
	0x0044,0x0044,0x0044,0x0044,0x0061,0x0061,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0460,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,
	0x0000,0x002E,0x0044,0x0044,0x0044,0x0062,0x0063,0x0064,
	0x0065,0x0066,0x0067,0x0068,0x0069,0x006A,0x006B,0x006C,
	0x006D,0x006E,0x006F,0x0468,0x0070,0x0071,0x0072,0x0073,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,

	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0074,0x0075,
	0x0076,0x0C60,0x0076,0x0077,0x0078,0x0079,0x0C60,0x007A,
	0x007B,0x007C,0x007D,0x0477,0x007E,0x007F,0x0080,0x0081,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,
	0x0000,0x002E,0x0044,0x0044,0x0044,0x0062,0x0082,0x0083,
	0x0084,0x0085,0x0085,0x0086,0x0087,0x0088,0x006B,0x0085,
	0x0089,0x008A,0x008A,0x008B,0x008C,0x008D,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,

	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0860,0x0077,
	0x0476,0x0476,0x0476,0x0077,0x084D,0x008E,0x008F,0x0476,
	0x007E,0x0476,0x0476,0x084D,0x0861,0x0476,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,
	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,

	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0090,0x0091,0x0092,0x0093,0x0094,0x0095,0x0096,
	0x0097,0x0098,0x0098,0x0099,0x009A,0x009B,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,
	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x009C,0x009D,0x009E,0x009F,0x00A0,0x00A1,0x00A2,
	0x00A3,0x00A4,0x00A5,0x00A6,0x00A7,0x00A8,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,

	0x0000,0x002E,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,0x0044,
	0x0044,0x0044,0x0044,0x0044,0x0049,0x0000,0x0000,0x0000,
	0x0000,0x00A9,0x00AA,0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,
	0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,
	0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,0x00AB,
	0x00AB,0x00AB,0x00AB,0x00AB,0x00AC,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x00AD,0x00AE,0x00AF,0x00B0,
	0x00B1,0x00B2,0x00B3,0x00B4,0x00B5,0x00B6,0x00B7,0x00B8,
	0x00B9,0x0000,0x00BA,0x00BB,0x00BC,0x00BD,0x00BE,0x00BF,
	0x00C0,0x00C1,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x00C2,0x00C3,0x00C4,0x00C5,
	0x00C6,0x00C7,0x00C8,0x00C9,0x00CA,0x00CB,0x0000,0x00CC,
	0x00CD,0x0000,0x00CE,0x00CF,0x00D0,0x00D1,0x00D2,0x00D3,
	0x00D4,0x00D5,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short instructionsPal[256] __attribute__((aligned(4)))=
{
	0x7FFF,0x0000,0x0200,0x0210,0x4000,0x4010,0x4200,0x6318,
	0x4210,0x001F,0x03E0,0x03FF,0x7FFE,0x7FBD,0x18C6,0x0000,
	0x0000,0x63FF,0x671F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(instructions)
