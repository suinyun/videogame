	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.align	2
	.global	goToStart
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToStart, %function
goToStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L4
	mov	lr, pc
	bx	r3
	ldr	r4, .L4+4
	ldr	r2, .L4+8
	ldr	r1, .L4+12
	ldr	r0, .L4+16
	mov	r3, #1
	mov	lr, pc
	bx	r4
	ldr	r3, .L4+20
	mov	lr, pc
	bx	r3
	ldr	r4, .L4+24
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L4+28
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L4+32
	mov	r2, #100663296
	ldr	r1, .L4+36
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L4+40
	ldr	r1, .L4+44
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	mov	r2, #0
	mov	ip, #256
	mov	r0, #7936
	ldr	r1, .L4+48
	strh	r0, [r3, #8]	@ movhi
	strh	ip, [r3]	@ movhi
	pop	{r4, lr}
	str	r2, [r1]
	strh	r2, [r3, #18]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	bx	lr
.L5:
	.align	2
.L4:
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	697600
	.word	startMusic
	.word	waitForVBlank
	.word	DMANow
	.word	startPal
	.word	5904
	.word	startTiles
	.word	100726784
	.word	startMap
	.word	state
	.size	goToStart, .-goToStart
	.align	2
	.global	initialize
	.syntax unified
	.arm
	.fpu softvfp
	.type	initialize, %function
initialize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L8
	mov	r2, #83886080
	ldr	r1, .L8+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L8+8
	mov	r2, #100663296
	ldr	r1, .L8+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L8+16
	ldr	r1, .L8+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	mov	r1, #256
	mov	r2, #24320
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #8]	@ movhi
	ldr	r3, .L8+24
	mov	lr, pc
	bx	r3
	pop	{r4, lr}
	b	goToStart
.L9:
	.align	2
.L8:
	.word	DMANow
	.word	startPal
	.word	5904
	.word	startTiles
	.word	100726784
	.word	startMap
	.word	hideSprites
	.size	initialize, .-initialize
	.align	2
	.global	goToInstruction
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToInstruction, %function
goToInstruction:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L12
	mov	r2, #83886080
	ldr	r1, .L12+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #3424
	mov	r2, #100663296
	ldr	r1, .L12+8
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L12+12
	ldr	r1, .L12+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #48
	ldr	r2, .L12+20
	ldr	r1, .L12+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L12+28
	ldr	r1, .L12+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	mov	r1, #7936
	mov	lr, #768
	mov	r2, #0
	mov	r0, #1
	strh	r1, [r3, #8]	@ movhi
	ldr	ip, .L12+36
	ldr	r1, .L12+40
	strh	ip, [r3, #10]	@ movhi
	strh	lr, [r3]	@ movhi
	str	r0, [r1]
	pop	{r4, lr}
	strh	r2, [r3, #18]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	bx	lr
.L13:
	.align	2
.L12:
	.word	DMANow
	.word	instructionsPal
	.word	instructionsTiles
	.word	100726784
	.word	instructionsMap
	.word	100696064
	.word	simInsTiles
	.word	100722688
	.word	simInsMap
	.word	7432
	.word	state
	.size	goToInstruction, .-goToInstruction
	.align	2
	.global	start
	.syntax unified
	.arm
	.fpu softvfp
	.type	start, %function
start:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L19
	ldrh	r3, [r3]
	tst	r3, #8
	bxeq	lr
	ldr	r3, .L19+4
	ldrh	r3, [r3]
	tst	r3, #8
	bxne	lr
	b	goToInstruction
.L20:
	.align	2
.L19:
	.word	oldButtons
	.word	buttons
	.size	start, .-start
	.align	2
	.global	goToGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToGame, %function
goToGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	mov	r3, #256
	ldr	r5, .L23
	mov	r2, #83886080
	ldr	r1, .L23+4
	mov	r0, #3
	mov	r4, #67108864
	mov	lr, pc
	bx	r5
	ldr	r3, .L23+8
	mov	r2, #100663296
	ldr	r1, .L23+12
	mov	r0, #3
	mov	lr, pc
	bx	r5
	mov	r3, #4096
	ldr	r2, .L23+16
	ldr	r1, .L23+20
	mov	r0, #3
	mov	lr, pc
	bx	r5
	mov	r3, #524
	ldr	r2, .L23+24
	ldr	r1, .L23+28
	ldrh	r2, [r2]
	ldrh	r0, [r1]
	strh	r2, [r4, #18]	@ movhi
	ldr	r1, .L23+32
	ldr	r2, .L23+36
	strh	r0, [r4, #16]	@ movhi
	strh	r1, [r4, #80]	@ movhi
	strh	r2, [r4, #8]	@ movhi
	strh	r3, [r4, #82]	@ movhi
	ldr	r2, .L23+40
	mov	r3, #256
	ldr	r1, .L23+44
	mov	r0, #3
	mov	lr, pc
	bx	r5
	ldr	r2, .L23+48
	ldr	r1, .L23+52
	mov	r0, #3
	mov	r3, #16384
	mov	lr, pc
	bx	r5
	ldr	r3, .L23+56
	mov	lr, pc
	bx	r3
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L23+60
	mov	r0, #3
	mov	lr, pc
	bx	r5
	mov	r1, #4352
	mov	r2, #2
	ldr	r3, .L23+64
	strh	r1, [r4]	@ movhi
	str	r2, [r3]
	pop	{r4, r5, r6, lr}
	bx	lr
.L24:
	.align	2
.L23:
	.word	DMANow
	.word	bgPal
	.word	16368
	.word	bgTiles
	.word	100720640
	.word	bgMap
	.word	vOff
	.word	hOff
	.word	4418
	.word	-9215
	.word	83886592
	.word	enemiesPal
	.word	100728832
	.word	enemiesTiles
	.word	hideSprites
	.word	shadowOAM
	.word	state
	.size	goToGame, .-goToGame
	.align	2
	.global	instruction
	.syntax unified
	.arm
	.fpu softvfp
	.type	instruction, %function
instruction:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L33
	ldrh	r3, [r3]
	tst	r3, #8
	bxeq	lr
	ldr	r3, .L33+4
	ldrh	r3, [r3]
	tst	r3, #8
	bxne	lr
	push	{r4, lr}
	ldr	r3, .L33+8
	mov	lr, pc
	bx	r3
	ldr	r4, .L33+12
	mov	r3, #1
	ldr	r2, .L33+16
	ldr	r1, .L33+20
	ldr	r0, .L33+24
	mov	lr, pc
	bx	r4
	ldr	r3, .L33+28
	mov	lr, pc
	bx	r3
	pop	{r4, lr}
	b	goToGame
.L34:
	.align	2
.L33:
	.word	oldButtons
	.word	buttons
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	1489248
	.word	gameMusic
	.word	initGame
	.size	instruction, .-instruction
	.align	2
	.global	goToPause
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToPause, %function
goToPause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #2384
	ldr	r4, .L37
	ldr	r2, .L37+4
	ldr	r1, .L37+8
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L37+12
	ldr	r1, .L37+16
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	mov	r2, #0
	mov	ip, #3
	mov	r1, #768
	ldr	lr, .L37+20
	ldr	r0, .L37+24
	strh	lr, [r3, #80]	@ movhi
	strh	r0, [r3, #82]	@ movhi
	ldr	lr, .L37+28
	ldr	r0, .L37+32
	strh	lr, [r3, #10]	@ movhi
	str	ip, [r0]
	pop	{r4, lr}
	strh	r2, [r3, #18]	@ movhi
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	bx	lr
.L38:
	.align	2
.L37:
	.word	DMANow
	.word	100712448
	.word	pauseTiles
	.word	100718592
	.word	pauseMap
	.word	4418
	.word	1037
	.word	23308
	.word	state
	.size	goToPause, .-goToPause
	.align	2
	.global	pause
	.syntax unified
	.arm
	.fpu softvfp
	.type	pause, %function
pause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L49
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L40
	ldr	r2, .L49+4
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L48
.L40:
	tst	r3, #4
	bxeq	lr
	ldr	r3, .L49+4
	ldrh	r3, [r3]
	tst	r3, #4
	bxne	lr
	b	goToStart
.L48:
	b	goToGame
.L50:
	.align	2
.L49:
	.word	oldButtons
	.word	buttons
	.size	pause, .-pause
	.align	2
	.global	goToWin
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToWin, %function
goToWin:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L53
	mov	r2, #83886080
	ldr	r1, .L53+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L53+8
	mov	r2, #100663296
	ldr	r1, .L53+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L53+16
	ldr	r1, .L53+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	mov	lr, #256
	mov	r2, #0
	mov	ip, #24320
	mov	r0, #4
	ldr	r1, .L53+24
	strh	ip, [r3, #8]	@ movhi
	strh	lr, [r3]	@ movhi
	str	r0, [r1]
	pop	{r4, lr}
	strh	r2, [r3, #18]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	bx	lr
.L54:
	.align	2
.L53:
	.word	DMANow
	.word	winPal
	.word	9264
	.word	winTiles
	.word	100726784
	.word	winMap
	.word	state
	.size	goToWin, .-goToWin
	.align	2
	.global	win
	.syntax unified
	.arm
	.fpu softvfp
	.type	win, %function
win:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r2, #0
	ldr	r1, .L65
	strh	r2, [r3, #18]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	ldrh	r3, [r1]
	tst	r3, #8
	beq	.L61
	ldr	r3, .L65+4
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L64
.L61:
	mov	r2, #0
	ldr	r3, .L65+8
	str	r2, [r3]
	bx	lr
.L64:
	push	{r4, lr}
	bl	goToStart
	mov	r2, #0
	ldr	r3, .L65+8
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L66:
	.align	2
.L65:
	.word	oldButtons
	.word	buttons
	.word	won
	.size	win, .-win
	.align	2
	.global	goToLose
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLose, %function
goToLose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L69
	mov	r2, #83886080
	ldr	r1, .L69+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L69+8
	mov	r2, #100663296
	ldr	r1, .L69+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L69+16
	ldr	r1, .L69+20
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	mov	ip, #256
	mov	r2, #0
	mov	lr, #24320
	mov	r0, #5
	strh	ip, [r3]	@ movhi
	ldr	r1, .L69+24
	ldr	ip, .L69+28
	strh	lr, [r3, #8]	@ movhi
	str	r2, [ip, #32]
	str	r0, [r1]
	pop	{r4, lr}
	strh	r2, [r3, #18]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	bx	lr
.L70:
	.align	2
.L69:
	.word	DMANow
	.word	losePal
	.word	9616
	.word	loseTiles
	.word	100726784
	.word	loseMap
	.word	state
	.word	player
	.size	goToLose, .-goToLose
	.align	2
	.global	game
	.syntax unified
	.arm
	.fpu softvfp
	.type	game, %function
game:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, .L82
	mov	lr, pc
	bx	r3
	ldr	r3, .L82+4
	mov	lr, pc
	bx	r3
	ldr	r3, .L82+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L72
	ldr	r3, .L82+12
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L79
.L72:
	ldr	r3, .L82+16
	ldr	r3, [r3]
	cmp	r3, #0
	beq	.L80
	ldr	r3, .L82+20
	ldr	r4, [r3]
	cmp	r4, #1
	beq	.L81
	pop	{r4, lr}
	bx	lr
.L80:
	ldr	r3, .L82+24
	mov	lr, pc
	bx	r3
	ldr	r4, .L82+28
	mov	r3, #1
	ldr	r2, .L82+32
	ldr	r1, .L82+36
	ldr	r0, .L82+40
	mov	lr, pc
	bx	r4
	pop	{r4, lr}
	b	goToLose
.L79:
	bl	goToPause
	b	.L72
.L81:
	ldr	r3, .L82+24
	mov	lr, pc
	bx	r3
	mov	r3, r4
	ldr	r2, .L82+32
	ldr	r4, .L82+28
	ldr	r1, .L82+44
	ldr	r0, .L82+48
	mov	lr, pc
	bx	r4
	pop	{r4, lr}
	b	goToWin
.L83:
	.align	2
.L82:
	.word	updateGame
	.word	drawGame
	.word	oldButtons
	.word	buttons
	.word	livesRemaining
	.word	won
	.word	stopSound
	.word	playSoundA
	.word	11025
	.word	80656
	.word	loseSong
	.word	302688
	.word	winSong
	.size	game, .-game
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ Volatile: function does not return.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r7, fp, lr}
	ldr	r3, .L100
	mov	lr, pc
	bx	r3
	ldr	r3, .L100+4
	mov	lr, pc
	bx	r3
	ldr	r3, .L100+8
	mov	lr, pc
	bx	r3
	mov	r7, #67108864
	mov	r6, #0
	ldr	r9, .L100+12
	ldr	r4, .L100+16
	ldr	r8, .L100+20
	ldr	fp, .L100+24
	ldr	r10, .L100+28
	ldr	r5, .L100+32
.L85:
	ldrh	r1, [r9]
	strh	r1, [r4]	@ movhi
	ldr	r2, [r8]
	ldrh	r3, [r5, #48]
	strh	r3, [r9]	@ movhi
	cmp	r2, #5
	ldrls	pc, [pc, r2, asl #2]
	b	.L85
.L88:
	.word	.L87
	.word	.L89
	.word	.L90
	.word	.L91
	.word	.L92
	.word	.L93
.L93:
	strh	r6, [r7, #18]	@ movhi
	strh	r6, [r7, #16]	@ movhi
	ldrh	r3, [r4]
	tst	r3, #8
	beq	.L85
	ldrh	r3, [r9]
	tst	r3, #8
	bne	.L85
	ldr	r3, .L100+36
	mov	lr, pc
	bx	r3
	b	.L85
.L92:
	ldr	r3, .L100+40
	mov	lr, pc
	bx	r3
	b	.L85
.L91:
	ldr	r3, .L100+44
	mov	lr, pc
	bx	r3
	b	.L85
.L90:
	mov	lr, pc
	bx	r10
	b	.L85
.L89:
	mov	lr, pc
	bx	fp
	b	.L85
.L87:
	tst	r1, #8
	beq	.L85
	tst	r3, #8
	bne	.L85
	ldr	r3, .L100+48
	mov	lr, pc
	bx	r3
	b	.L85
.L101:
	.align	2
.L100:
	.word	initialize
	.word	setupSounds
	.word	setupInterrupts
	.word	buttons
	.word	oldButtons
	.word	state
	.word	instruction
	.word	game
	.word	67109120
	.word	goToStart
	.word	win
	.word	pause
	.word	goToInstruction
	.size	main, .-main
	.text
	.align	2
	.global	lose
	.syntax unified
	.arm
	.fpu softvfp
	.type	lose, %function
lose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r3, #67108864
	mov	r2, #0
	ldr	r1, .L107
	strh	r2, [r3, #18]	@ movhi
	strh	r2, [r3, #16]	@ movhi
	ldrh	r3, [r1]
	tst	r3, #8
	bxeq	lr
	ldr	r3, .L107+4
	ldrh	r3, [r3]
	tst	r3, #8
	bxne	lr
	b	goToStart
.L108:
	.align	2
.L107:
	.word	oldButtons
	.word	buttons
	.size	lose, .-lose
	.comm	oldButtons,2,2
	.comm	buttons,2,2
	.comm	state,4,4
	.global	size
	.comm	objs,140,4
	.global	spaceSoundToPlay
	.comm	spaceSoundLen,4,4
	.comm	spaceSound,4,4
	.comm	soundB,32,4
	.comm	soundA,32,4
	.data
	.align	2
	.type	size, %object
	.size	size, 4
size:
	.word	5
	.bss
	.align	2
	.type	spaceSoundToPlay, %object
	.size	spaceSoundToPlay, 4
spaceSoundToPlay:
	.space	4
	.ident	"GCC: (devkitARM release 47) 7.1.0"
