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
	.file	"game.c"
	.text
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateEnemy.part.2, %function
updateEnemy.part.2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, [r0, #8]
	cmp	r2, #1
	push	{r4, lr}
	ldr	ip, [r0, #16]
	ble	.L2
	ldr	r3, [r0, #28]
	add	r3, r2, r3
	cmp	r3, #512
	bge	.L2
.L3:
	ldr	r3, [r0, #12]
	cmp	r3, #1
	ldr	r1, [r0, #20]
	ble	.L4
	ldr	lr, [r0, #24]
	add	lr, r3, lr
	cmp	lr, #512
	blt	.L5
.L4:
	rsb	r1, r1, #0
	str	r1, [r0, #20]
.L5:
	ldr	r4, .L8
	ldr	lr, .L8+4
	ldr	r4, [r4]
	ldr	lr, [lr]
	add	r2, r2, ip
	add	r3, r3, r1
	sub	ip, r2, r4
	sub	r1, r3, lr
	str	r2, [r0, #8]
	str	r3, [r0, #12]
	str	ip, [r0]
	str	r1, [r0, #4]
	pop	{r4, lr}
	bx	lr
.L2:
	rsb	ip, ip, #0
	str	ip, [r0, #16]
	b	.L3
.L9:
	.align	2
.L8:
	.word	vOff
	.word	hOff
	.size	updateEnemy.part.2, .-updateEnemy.part.2
	.align	2
	.global	initPlayer
	.syntax unified
	.arm
	.fpu softvfp
	.type	initPlayer, %function
initPlayer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	mov	r6, #80
	mov	r5, #45
	mov	r2, #1
	mov	lr, #16
	mov	r4, #10
	mov	ip, #0
	ldr	r3, .L12
	ldr	r1, .L12+4
	ldr	r0, [r3]
	ldr	r1, [r1]
	ldr	r3, .L12+8
	sub	r0, r6, r0
	sub	r1, r5, r1
	str	r6, [r3, #8]
	str	r5, [r3, #12]
	str	r4, [r3, #60]
	str	lr, [r3, #28]
	str	lr, [r3, #24]
	str	r0, [r3]
	str	r1, [r3, #4]
	str	r2, [r3, #20]
	str	r2, [r3, #16]
	str	r2, [r3, #64]
	str	ip, [r3, #56]
	str	ip, [r3, #44]
	pop	{r4, r5, r6, lr}
	bx	lr
.L13:
	.align	2
.L12:
	.word	vOff
	.word	hOff
	.word	player
	.size	initPlayer, .-initPlayer
	.align	2
	.global	animatePlayer
	.syntax unified
	.arm
	.fpu softvfp
	.type	animatePlayer, %function
animatePlayer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	ip, .L27
	ldr	r3, .L27+4
	ldr	r2, [ip, #32]
	smull	r0, r1, r2, r3
	asr	r3, r2, #31
	rsb	r3, r3, r1, asr #4
	add	r3, r3, r3, lsl #2
	subs	r3, r2, r3, lsl #3
	push	{r4, r5, r6, lr}
	bne	.L15
	mov	lr, #2
	ldr	r0, .L27+8
	ldr	r1, .L27+12
	str	r3, [ip, #44]
	str	lr, [r0, #44]
	str	r3, [r1]
.L15:
	ldr	r3, .L27+16
	ldrh	r1, [r3, #48]
	tst	r1, #2
	bne	.L16
	mov	lr, #1
	mov	r1, #2
	ldr	r0, .L27+12
	str	r1, [ip, #44]
	str	lr, [r0]
	ldrh	r3, [r3, #48]
.L17:
	ldr	r3, .L27+16
	ldrh	r3, [r3, #48]
	tst	r3, #512
	beq	.L25
.L18:
	ldr	r4, .L27+12
	ldr	r3, [r4, #4]
	cmp	r3, #1
	addne	r2, r2, #1
	strne	r2, [ip, #32]
	beq	.L26
.L14:
	pop	{r4, r5, r6, lr}
	bx	lr
.L16:
	ldrh	r3, [r3, #48]
	tst	r3, #1
	bne	.L17
	ldr	r3, .L27+12
	ldr	r3, [r3]
	cmp	r3, #1
	movne	r3, #1
	strne	r3, [ip, #44]
	ldr	r3, .L27+16
	ldrh	r3, [r3, #48]
	tst	r3, #512
	bne	.L18
.L25:
	mov	r2, #1
	ldr	r3, .L27+8
	pop	{r4, r5, r6, lr}
	str	r2, [r3, #44]
	bx	lr
.L26:
	mov	lr, #3
	mov	r3, #0
	ldr	r2, .L27+20
	ldr	r1, .L27+24
	ldr	r0, .L27+28
	ldr	r5, .L27+32
	str	lr, [ip, #44]
	mov	lr, pc
	bx	r5
	mov	r3, #0
	str	r3, [r4, #4]
	b	.L14
.L28:
	.align	2
.L27:
	.word	player
	.word	1717986919
	.word	crush
	.word	.LANCHOR0
	.word	67109120
	.word	11025
	.word	15011
	.word	breakSound
	.word	playSoundB
	.size	animatePlayer, .-animatePlayer
	.align	2
	.global	drawPlayer
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawPlayer, %function
drawPlayer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r0, .L30
	ldr	r3, [r0, #4]
	ldr	r1, [r0, #44]
	lsl	r3, r3, #23
	ldr	r2, .L30+4
	lsr	r3, r3, #23
	ldrb	r0, [r0]	@ zero_extendqisi2
	orr	r3, r3, #16384
	lsl	r1, r1, #6
	strh	r3, [r2, #2]	@ movhi
	strh	r0, [r2]	@ movhi
	strh	r1, [r2, #4]	@ movhi
	bx	lr
.L31:
	.align	2
.L30:
	.word	player
	.word	shadowOAM
	.size	drawPlayer, .-drawPlayer
	.align	2
	.global	initCrush
	.syntax unified
	.arm
	.fpu softvfp
	.type	initCrush, %function
initCrush:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	mov	r6, #196
	mov	r5, #109
	mov	r4, #10
	mov	lr, #100
	mov	r0, #1
	mov	r1, #16
	mov	ip, #2
	ldr	r3, .L34
	ldr	r2, [r3]
	ldr	r3, .L34+4
	sub	r2, r6, r2
	str	r2, [r3]
	ldr	r2, .L34+8
	ldr	r2, [r2]
	sub	r2, r5, r2
	str	r6, [r3, #8]
	str	r5, [r3, #12]
	str	r4, [r3, #60]
	str	lr, [r3, #56]
	str	ip, [r3, #44]
	str	r2, [r3, #4]
	str	r0, [r3, #20]
	str	r0, [r3, #16]
	str	r1, [r3, #28]
	str	r1, [r3, #24]
	pop	{r4, r5, r6, lr}
	bx	lr
.L35:
	.align	2
.L34:
	.word	vOff
	.word	crush
	.word	hOff
	.size	initCrush, .-initCrush
	.align	2
	.global	updateCrush
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateCrush, %function
updateCrush:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, lr}
	ldr	r5, .L71
	add	r2, r5, #8
	ldm	r2, {r2, r3}
	sub	r1, r2, #1
	lsl	r1, r1, #9
	add	r0, r1, r3
	ldr	ip, .L71+4
	lsl	r0, r0, #1
	ldrh	r0, [ip, r0]
	cmp	r0, #0
	sub	sp, sp, #16
	ldr	r0, [r5, #16]
	beq	.L37
	ldr	lr, [r5, #24]
	add	lr, r3, lr
	sub	lr, lr, #1
	add	r4, r1, lr
	lsl	r4, r4, #1
	ldrh	r4, [ip, r4]
	cmp	r4, #0
	bne	.L68
.L37:
	rsb	r0, r0, #0
	str	r0, [r5, #16]
.L38:
	add	r1, r1, #512
	sub	r4, r3, #1
	add	lr, r1, r4
	lsl	lr, lr, #1
	ldrh	lr, [ip, lr]
	cmp	lr, #0
	ldr	r6, [r5, #20]
	beq	.L39
	ldr	lr, [r5, #28]
	add	lr, r2, lr
	sub	lr, lr, #1
	lsl	lr, lr, #9
	add	r4, r4, lr
	lsl	r4, r4, #1
	ldrh	r4, [ip, r4]
	cmp	r4, #0
	bne	.L69
.L39:
	rsb	r6, r6, #0
	str	r6, [r5, #20]
.L40:
	ldr	ip, .L71+8
	ldr	r1, .L71+12
	ldr	ip, [ip]
	ldr	r1, [r1]
	ldr	r4, .L71+16
	add	r3, r3, r6
	add	r2, r2, r0
	sub	r0, r2, ip
	sub	r1, r3, r1
	add	r6, r4, #1072
	mov	r9, #1
	stm	r5, {r0, r1, r2, r3}
	ldr	r7, .L71+20
	ldr	r8, .L71+24
	add	r6, r6, #8
	b	.L44
.L42:
	add	r4, r4, #72
	cmp	r4, r6
	beq	.L70
.L44:
	ldr	r3, [r4, #68]
	cmp	r3, #0
	beq	.L42
	ldr	ip, [r4, #24]
	add	r0, r5, #8
	ldr	r10, [r4, #28]
	ldr	lr, [r4, #12]
	ldm	r0, {r0, r1}
	str	ip, [sp, #12]
	ldr	ip, [r4, #8]
	ldr	r3, [r5, #24]
	ldr	r2, [r5, #28]
	str	r10, [sp, #8]
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r7
	add	r4, r4, #72
	cmp	r0, #0
	strne	r9, [r8, #8]
	cmp	r4, r6
	bne	.L44
.L70:
	add	sp, sp, #16
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, lr}
	bx	lr
.L69:
	ldr	r4, [r5, #24]
	add	r4, r3, r4
	add	r1, r1, r4
	lsl	r1, r1, #1
	ldrh	r1, [ip, r1]
	cmp	r1, #0
	beq	.L39
	add	r1, lr, r4
	lsl	r1, r1, #1
	ldrh	r1, [ip, r1]
	cmp	r1, #0
	bne	.L40
	b	.L39
.L68:
	ldr	r4, [r5, #28]
	add	r4, r2, r4
	lsl	r4, r4, #9
	add	r6, r3, r4
	lsl	r6, r6, #1
	ldrh	r6, [ip, r6]
	cmp	r6, #0
	beq	.L37
	add	lr, lr, r4
	lsl	lr, lr, #1
	ldrh	lr, [ip, lr]
	cmp	lr, #0
	bne	.L38
	b	.L37
.L72:
	.align	2
.L71:
	.word	crush
	.word	collisionmapBitmap
	.word	vOff
	.word	hOff
	.word	pbullets
	.word	collision
	.word	.LANCHOR0
	.size	updateCrush, .-updateCrush
	.align	2
	.global	drawCrush
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawCrush, %function
drawCrush:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L85
	ldr	r2, [r3, #28]
	ldr	r1, [r3]
	rsb	r2, r2, #0
	cmp	r1, r2
	ldr	r2, [r3, #56]
	ble	.L80
	str	lr, [sp, #-4]!
	ldr	lr, [r3, #4]
	cmp	lr, #239
	cmple	r1, #159
	movle	r0, #1
	movgt	r0, #0
	ldr	ip, [r3, #24]
	rsb	ip, ip, #0
	cmp	lr, ip
	movle	r0, #0
	andgt	r0, r0, #1
	cmp	r0, #0
	bne	.L84
	mov	r1, #512
	ldr	r3, .L85+4
	lsl	r2, r2, #3
	strh	r1, [r3, r2]	@ movhi
.L73:
	ldr	lr, [sp], #4
	bx	lr
.L80:
	mov	r1, #512
	ldr	r3, .L85+4
	lsl	r2, r2, #3
	strh	r1, [r3, r2]	@ movhi
	bx	lr
.L84:
	ldr	r3, [r3, #44]
	ldr	ip, .L85+4
	lsl	lr, lr, #23
	lsl	r2, r2, #3
	add	r3, r3, #32
	lsr	lr, lr, #23
	add	r0, ip, r2
	lsl	r3, r3, #1
	orr	lr, lr, #16384
	and	r1, r1, #255
	strh	r1, [ip, r2]	@ movhi
	strh	lr, [r0, #2]	@ movhi
	strh	r3, [r0, #4]	@ movhi
	b	.L73
.L86:
	.align	2
.L85:
	.word	crush
	.word	shadowOAM
	.size	drawCrush, .-drawCrush
	.align	2
	.global	initMediocre
	.syntax unified
	.arm
	.fpu softvfp
	.type	initMediocre, %function
initMediocre:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r0, #101
	mov	r2, #40
	mov	r1, #1
	mov	ip, #16
	mov	r6, #10
	ldr	r4, .L91
	ldr	r3, .L91+4
	ldr	lr, .L91+8
	ldr	r4, [r4]
	ldr	r5, [r3]
	ldr	r3, .L91+12
	mov	r7, lr
	sub	lr, lr, r4
.L88:
	str	r2, [r3, #12]
	sub	r4, r2, r5
	add	r2, r2, #40
	cmp	r2, #200
	str	r0, [r3, #56]
	str	r7, [r3, #8]
	str	r1, [r3, #20]
	str	r1, [r3, #16]
	str	ip, [r3, #28]
	str	ip, [r3, #24]
	str	r6, [r3, #60]
	str	r1, [r3, #68]
	str	lr, [r3]
	str	r4, [r3, #4]
	add	r0, r0, #1
	add	r3, r3, #72
	bne	.L88
	pop	{r4, r5, r6, r7, lr}
	bx	lr
.L92:
	.align	2
.L91:
	.word	vOff
	.word	hOff
	.word	350
	.word	mediocres
	.size	initMediocre, .-initMediocre
	.align	2
	.global	updateMediocre
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateMediocre, %function
updateMediocre:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, lr}
	mov	r6, r0
	add	r1, r0, #8
	ldm	r1, {r1, r3}
	lsl	r2, r1, #9
	sub	r4, r3, #1
	add	r0, r2, r4
	ldr	lr, .L129
	lsl	r0, r0, #1
	ldrh	r0, [lr, r0]
	cmp	r0, #0
	sub	sp, sp, #20
	ldr	r0, [r6, #20]
	beq	.L94
	ldr	ip, [r6, #28]
	add	ip, r1, ip
	sub	ip, ip, #1
	lsl	ip, ip, #9
	add	r4, r4, ip
	lsl	r4, r4, #1
	ldrh	r4, [lr, r4]
	cmp	r4, #0
	bne	.L127
.L94:
	rsb	r0, r0, #0
	str	r0, [r6, #20]
.L95:
	sub	r2, r2, #512
	add	ip, r3, r2
	lsl	ip, ip, #1
	ldrh	ip, [lr, ip]
	cmp	ip, #0
	ldr	ip, [r6, #16]
	beq	.L96
	ldr	r4, [r6, #24]
	add	r4, r3, r4
	sub	r4, r4, #1
	add	r2, r2, r4
	lsl	r2, r2, #1
	ldrh	r2, [lr, r2]
	cmp	r2, #0
	bne	.L128
.L96:
	rsb	ip, ip, #0
	str	ip, [r6, #16]
.L97:
	ldr	r2, .L129+4
	add	r3, r3, r0
	ldr	r0, [r2]
	ldr	r2, .L129+8
	ldr	r2, [r2]
	add	r1, r1, ip
	ldr	r7, .L129+12
	sub	r0, r1, r0
	sub	r2, r3, r2
	mov	r5, #0
	mov	r4, r7
	str	r1, [r6, #8]
	str	r3, [r6, #12]
	stm	r6, {r0, r2}
	ldr	r8, .L129+16
	b	.L100
.L98:
	add	r5, r5, #1
	cmp	r5, #15
	add	r4, r4, #72
	beq	.L93
.L100:
	ldr	r3, [r4, #68]
	cmp	r3, #0
	beq	.L98
	ldr	ip, [r4, #24]
	add	r0, r6, #8
	ldr	r3, [r6, #24]
	ldr	r2, [r6, #28]
	ldm	r0, {r0, r1}
	ldr	r9, [r4, #28]
	ldr	lr, [r4, #12]
	str	ip, [sp, #12]
	ldr	ip, [r4, #8]
	str	r9, [sp, #8]
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r8
	cmp	r0, #0
	beq	.L98
	mov	r1, #0
	mov	lr, #1
	ldr	r0, .L129+20
	ldr	r3, [r0]
	ldr	r2, .L129+24
	sub	r3, r3, #1
	add	ip, r3, r3, lsl #3
	add	r2, r2, ip, lsl #3
	add	r5, r5, r5, lsl #3
	ldr	ip, .L129+28
	add	r5, r7, r5, lsl #3
	str	r1, [r5, #68]
	str	r3, [r0]
	str	r1, [r2, #68]
	str	lr, [ip, #4]
.L93:
	add	sp, sp, #20
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L128:
	ldr	r2, [r6, #28]
	add	r2, r1, r2
	lsl	r2, r2, #9
	add	r5, r3, r2
	lsl	r5, r5, #1
	ldrh	r5, [lr, r5]
	cmp	r5, #0
	beq	.L96
	add	r2, r4, r2
	lsl	r2, r2, #1
	ldrh	r2, [lr, r2]
	cmp	r2, #0
	bne	.L97
	b	.L96
.L127:
	ldr	r4, [r6, #24]
	add	r4, r3, r4
	add	r5, r2, r4
	lsl	r5, r5, #1
	ldrh	r5, [lr, r5]
	cmp	r5, #0
	beq	.L94
	add	ip, ip, r4
	lsl	ip, ip, #1
	ldrh	ip, [lr, ip]
	cmp	ip, #0
	bne	.L95
	b	.L94
.L130:
	.align	2
.L129:
	.word	collisionmapBitmap
	.word	vOff
	.word	hOff
	.word	pbullets
	.word	collision
	.word	livesRemaining
	.word	lives
	.word	.LANCHOR0
	.size	updateMediocre, .-updateMediocre
	.align	2
	.global	drawMediocre
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawMediocre, %function
drawMediocre:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, [r0, #28]
	ldr	r2, [r0]
	rsb	r3, r3, #0
	cmp	r2, r3
	ldr	r3, [r0, #56]
	ble	.L141
	str	lr, [sp, #-4]!
	ldr	lr, [r0, #4]
	cmp	lr, #239
	cmple	r2, #159
	movle	r1, #1
	movgt	r1, #0
	ldr	ip, [r0, #24]
	rsb	ip, ip, #0
	cmp	lr, ip
	movle	r1, #0
	andgt	r1, r1, #1
	cmp	r1, #0
	bne	.L145
.L132:
	mov	r1, #512
	ldr	r2, .L146
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
.L131:
	ldr	lr, [sp], #4
	bx	lr
.L141:
	mov	r1, #512
	ldr	r2, .L146
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
	bx	lr
.L145:
	ldr	r1, [r0, #68]
	cmp	r1, #0
	beq	.L132
	mov	ip, #68
	ldr	r0, .L146
	lsl	lr, lr, #23
	lsl	r3, r3, #3
	lsr	lr, lr, #23
	add	r1, r0, r3
	orr	lr, lr, #16384
	and	r2, r2, #255
	strh	r2, [r0, r3]	@ movhi
	strh	lr, [r1, #2]	@ movhi
	strh	ip, [r1, #4]	@ movhi
	b	.L131
.L147:
	.align	2
.L146:
	.word	shadowOAM
	.size	drawMediocre, .-drawMediocre
	.align	2
	.global	initPBullets
	.syntax unified
	.arm
	.fpu softvfp
	.type	initPBullets, %function
initPBullets:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r1, #31
	mov	r0, #16
	mov	r2, #0
	mov	r4, #2
	ldr	ip, .L152
	ldr	r3, .L152+4
	ldr	lr, [ip]
	ldr	ip, [r3]
	ldr	r3, .L152+8
	rsb	lr, lr, #0
	rsb	ip, ip, #0
.L149:
	str	r1, [r3, #56]
	add	r1, r1, #1
	cmp	r1, #46
	str	r0, [r3, #28]
	str	r0, [r3, #24]
	str	r2, [r3, #8]
	str	r2, [r3, #12]
	str	r2, [r3, #16]
	str	r4, [r3, #20]
	str	r2, [r3, #68]
	str	lr, [r3]
	str	ip, [r3, #4]
	add	r3, r3, #72
	bne	.L149
	pop	{r4, lr}
	bx	lr
.L153:
	.align	2
.L152:
	.word	vOff
	.word	hOff
	.word	pbullets
	.size	initPBullets, .-initPBullets
	.align	2
	.global	firePBullet
	.syntax unified
	.arm
	.fpu softvfp
	.type	firePBullet, %function
firePBullet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	ldr	lr, .L160
	mov	r3, #0
	mov	r2, lr
	b	.L157
.L155:
	add	r3, r3, #1
	cmp	r3, #15
	add	r2, r2, #72
	beq	.L154
.L157:
	ldr	r1, [r2, #68]
	cmp	r1, #0
	bne	.L155
	mov	ip, #1
	ldr	r5, .L160+4
	ldr	r2, .L160+8
	ldr	r1, [r2]
	ldr	r2, [r5, #24]
	ldr	r4, [r5, #8]
	add	r3, r3, r3, lsl #3
	lsl	r3, r3, #3
	add	r7, r2, r2, lsr #31
	ldr	r2, .L160+12
	add	r0, lr, r3
	sub	r1, r4, r1
	str	r1, [lr, r3]
	ldr	r6, [r2]
	ldr	r1, [r0, #24]
	ldr	r2, [r5, #12]
	add	r1, r1, r1, lsr #31
	add	r3, r2, r7, asr ip
	ldr	lr, [r5, #64]
	sub	r3, r3, r1, asr ip
	sub	r2, r2, r6
	str	r4, [r0, #8]
	str	r3, [r0, #12]
	str	lr, [r0, #20]
	str	r2, [r0, #4]
	str	ip, [r0, #68]
.L154:
	pop	{r4, r5, r6, r7, lr}
	bx	lr
.L161:
	.align	2
.L160:
	.word	pbullets
	.word	player
	.word	vOff
	.word	hOff
	.size	firePBullet, .-firePBullet
	.align	2
	.global	updatePlayer
	.syntax unified
	.arm
	.fpu softvfp
	.type	updatePlayer, %function
updatePlayer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, lr}
	ldr	r1, .L233
	ldr	r4, .L233+4
	ldrh	r3, [r1, #48]
	ldr	lr, .L233+8
	ldr	r5, .L233+12
	tst	r3, #32
	add	r2, r4, #8
	sub	sp, sp, #16
	ldm	r2, {r2, r3}
	ldr	r0, [lr]
	ldr	ip, [r5]
	bne	.L163
	cmp	r3, #0
	ble	.L164
	sub	r1, r3, #1
	add	r5, r1, r2, lsl #9
	ldr	r6, .L233+16
	lsl	r5, r5, #1
	ldrh	r5, [r6, r5]
	cmp	r5, #0
	bne	.L228
.L165:
	cmp	r0, #0
	ble	.L164
	ldr	r1, [r4, #4]
	cmp	r1, #120
	suble	r0, r0, #2
	strle	r0, [lr]
.L164:
	ldr	r7, .L233+20
	ldr	r6, [r7]
	sub	r3, r3, r0
	sub	r2, r2, ip
	cmp	r6, #1
	stm	r4, {r2, r3}
	ldr	r3, [r4, #60]
	beq	.L173
	ldr	r2, .L233+24
	ldrh	r2, [r2]
	tst	r2, #1
	bne	.L229
.L173:
	ldr	r9, .L233+28
	add	r3, r3, #1
	cmp	r6, #0
	mov	r8, #0
	mov	r5, r9
	str	r3, [r4, #60]
	ldr	r10, .L233+32
	bne	.L174
	ldr	r3, [r5, #68]
	cmp	r3, #0
	bne	.L230
.L174:
	cmp	r8, #1
	add	r5, r5, #72
	beq	.L175
	ldr	r6, [r7]
	cmp	r6, #0
	mov	r8, #1
	bne	.L174
	ldr	r3, [r5, #68]
	cmp	r3, #0
	beq	.L174
.L230:
	ldr	r2, [r5, #24]
	ldr	r1, [r5, #28]
	sub	r2, r2, #3
	ldr	r0, [r5, #12]
	ldr	ip, [r5, #8]
	ldr	r3, [r4, #24]
	str	r2, [sp, #12]
	sub	r1, r1, #3
	ldr	r2, [r4, #28]
	str	r1, [sp, #8]
	add	r0, r0, #3
	ldr	r1, [r4, #12]
	str	r0, [sp, #4]
	add	ip, ip, #3
	ldr	r0, [r4, #8]
	str	ip, [sp]
	mov	lr, pc
	bx	r10
	cmp	r0, #0
	beq	.L174
	ldr	r2, .L233+36
	ldr	r3, [r2]
	ldr	ip, .L233+40
	sub	r3, r3, #1
	ldr	r1, .L233+44
	str	r3, [r2]
	add	r3, r3, r3, lsl #3
	ldr	r0, [ip]
	add	r1, r1, r3, lsl #3
	lsl	r3, r8, #3
	add	r8, r3, r8
	sub	r0, r0, #1
	add	r9, r9, r8, lsl #3
	str	r6, [r1, #68]
	str	r0, [ip]
	mov	r3, r6
	ldr	r2, .L233+48
	ldr	r1, .L233+52
	ldr	r0, .L233+56
	ldr	r5, .L233+60
	str	r6, [r9, #68]
	mov	lr, pc
	bx	r5
	str	r6, [r7]
.L175:
	ldr	r7, .L233+64
	mov	r5, r7
	ldr	r3, [r5, #68]
	cmp	r3, #0
	mov	r6, #0
	ldr	r8, .L233+32
	bne	.L231
.L177:
	cmp	r6, #1
	add	r5, r5, #72
	beq	.L178
	ldr	r3, [r5, #68]
	cmp	r3, #0
	mov	r6, #1
	beq	.L177
.L231:
	ldr	lr, [r5, #24]
	add	r0, r4, #8
	ldr	ip, [r5, #28]
	ldr	r3, [r4, #24]
	ldr	r2, [r4, #28]
	ldm	r0, {r0, r1}
	str	lr, [sp, #12]
	ldr	lr, [r5, #12]
	str	ip, [sp, #8]
	ldr	ip, [r5, #8]
	stm	sp, {ip, lr}
	mov	lr, pc
	bx	r8
	cmp	r0, #0
	beq	.L177
	mov	r0, #1
	mov	ip, #0
	ldr	r2, .L233+36
	ldr	r3, [r2]
	add	r1, r3, r0
	str	r1, [r2]
	ldr	r1, .L233+44
	add	r3, r3, r3, lsl #3
	add	r1, r1, r3, lsl #3
	lsl	r3, r6, #3
	add	r6, r3, r6
	add	r7, r7, r6, lsl #3
	str	r0, [r1, #68]
	mov	r3, ip
	ldr	r2, .L233+68
	ldr	r1, .L233+72
	ldr	r0, .L233+76
	str	ip, [r7, #68]
	ldr	r4, .L233+60
	mov	lr, pc
	bx	r4
.L178:
	add	sp, sp, #16
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, lr}
	b	animatePlayer
.L163:
	ldrh	r6, [r1, #48]
	tst	r6, #16
	bne	.L166
	ldr	r6, [r4, #24]
	add	r1, r6, r3
	cmp	r1, #512
	bge	.L164
	add	r5, r1, r2, lsl #9
	ldr	r7, .L233+16
	lsl	r5, r5, #1
	ldrh	r5, [r7, r5]
	cmp	r5, #0
	beq	.L167
	ldr	r5, [r4, #28]
	add	r5, r2, r5
	sub	r5, r5, #1
	add	r1, r1, r5, lsl #9
	lsl	r1, r1, #1
	ldrh	r1, [r7, r1]
	cmp	r1, #0
	addne	r3, r3, #2
	strne	r3, [r4, #12]
.L167:
	cmp	r0, #272
	bge	.L164
	ldr	r1, [r4, #4]
	add	r6, r6, r1
	cmp	r6, #119
	addgt	r0, r0, #2
	strgt	r0, [lr]
	b	.L164
.L229:
	ldr	r2, .L233+80
	ldrh	r2, [r2]
	ands	r5, r2, #1
	bne	.L173
	cmp	r3, #6
	ble	.L173
	bl	firePBullet
	ldr	r6, .L233+60
	mov	r3, r5
	ldr	r2, .L233+48
	ldr	r1, .L233+84
	ldr	r0, .L233+88
	str	r5, [r4, #60]
	mov	lr, pc
	bx	r6
	ldr	r3, [r4, #60]
	ldr	r6, [r7]
	b	.L173
.L166:
	ldrh	lr, [r1, #48]
	tst	lr, #64
	bne	.L168
	cmp	r2, #0
	ble	.L164
	sub	r1, r2, #1
	lsl	r1, r1, #9
	add	lr, r1, r3
	ldr	r6, .L233+16
	lsl	lr, lr, #1
	ldrh	lr, [r6, lr]
	cmp	lr, #0
	bne	.L232
.L169:
	cmp	ip, #0
	ble	.L164
	ldr	r1, [r4]
	cmp	r1, #80
	suble	ip, ip, #2
	strle	ip, [r5]
	b	.L164
.L228:
	ldr	r5, [r4, #28]
	add	r5, r2, r5
	sub	r5, r5, #1
	add	r1, r1, r5, lsl #9
	lsl	r1, r1, #1
	ldrh	r1, [r6, r1]
	cmp	r1, #0
	subne	r3, r3, #2
	strne	r3, [r4, #12]
	b	.L165
.L168:
	ldrh	r1, [r1, #48]
	tst	r1, #128
	bne	.L164
	ldr	lr, [r4, #28]
	add	r1, lr, r2
	cmp	r1, #512
	bge	.L164
	lsl	r1, r1, #9
	add	r6, r1, r3
	ldr	r7, .L233+16
	lsl	r6, r6, #1
	ldrh	r6, [r7, r6]
	cmp	r6, #0
	beq	.L170
	ldr	r6, [r4, #24]
	add	r1, r1, r6
	add	r1, r1, r3
	add	r1, r7, r1, lsl #1
	ldrh	r1, [r1, #-2]
	cmp	r1, #0
	addne	r2, r2, #2
	strne	r2, [r4, #8]
.L170:
	cmp	ip, #352
	bge	.L227
	ldr	r2, [r4]
	add	lr, lr, r2
	cmp	lr, #80
	addgt	ip, ip, #2
	strgt	ip, [r5]
.L227:
	ldr	r2, [r4, #8]
	b	.L164
.L232:
	ldr	lr, [r4, #24]
	add	r1, r1, lr
	add	r1, r1, r3
	add	r1, r6, r1, lsl #1
	ldrh	r1, [r1, #-2]
	cmp	r1, #0
	subne	r2, r2, #2
	strne	r2, [r4, #8]
	b	.L169
.L234:
	.align	2
.L233:
	.word	67109120
	.word	player
	.word	hOff
	.word	vOff
	.word	collisionmapBitmap
	.word	.LANCHOR0
	.word	oldButtons
	.word	enemies
	.word	collision
	.word	livesRemaining
	.word	enemiesRemaining
	.word	lives
	.word	11025
	.word	15011
	.word	breakSound
	.word	playSoundB
	.word	goodEmojis
	.word	44100
	.word	66150
	.word	gmae
	.word	buttons
	.word	21024
	.word	SHOOT
	.size	updatePlayer, .-updatePlayer
	.align	2
	.global	updatePBullet
	.syntax unified
	.arm
	.fpu softvfp
	.type	updatePBullet, %function
updatePBullet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, [r0, #68]
	cmp	r3, #0
	beq	.L236
	ldr	r3, [r0, #4]
	ldr	r2, [r0, #24]
	add	r3, r3, r2
	cmp	r3, #238
	ble	.L245
.L236:
	mov	r3, #0
	str	r3, [r0, #68]
	bx	lr
.L245:
	ldr	r1, .L246
	ldr	r2, .L246+4
	str	lr, [sp, #-4]!
	ldr	r3, [r0, #12]
	ldr	lr, [r0, #20]
	ldr	ip, [r1]
	ldr	r2, [r2]
	ldr	r1, [r0, #8]
	add	r3, r3, lr
	sub	r1, r1, ip
	sub	r2, r3, r2
	stm	r0, {r1, r2}
	str	r3, [r0, #12]
	ldr	lr, [sp], #4
	bx	lr
.L247:
	.align	2
.L246:
	.word	vOff
	.word	hOff
	.size	updatePBullet, .-updatePBullet
	.align	2
	.global	drawPBullet
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawPBullet, %function
drawPBullet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, [r0, #68]
	cmp	r3, #0
	str	lr, [sp, #-4]!
	ldr	r3, [r0, #56]
	beq	.L249
	ldr	r2, [r0, #28]
	ldr	r1, [r0]
	rsb	r2, r2, #0
	cmp	r1, r2
	bgt	.L258
.L249:
	mov	ip, #0
	mov	r1, #512
	ldr	r2, .L259
	lsl	r3, r3, #3
	str	ip, [r0, #68]
	strh	r1, [r2, r3]	@ movhi
.L248:
	ldr	lr, [sp], #4
	bx	lr
.L258:
	ldr	lr, [r0, #4]
	cmp	lr, #239
	cmple	r1, #159
	movle	r2, #1
	movgt	r2, #0
	ldr	ip, [r0, #24]
	rsb	ip, ip, #0
	cmp	lr, ip
	movle	r2, #0
	andgt	r2, r2, #1
	cmp	r2, #0
	beq	.L249
	mov	ip, #70
	ldr	r0, .L259
	lsl	lr, lr, #23
	lsl	r3, r3, #3
	lsr	lr, lr, #23
	add	r2, r0, r3
	orr	lr, lr, #16384
	and	r1, r1, #255
	strh	r1, [r0, r3]	@ movhi
	strh	lr, [r2, #2]	@ movhi
	strh	ip, [r2, #4]	@ movhi
	b	.L248
.L260:
	.align	2
.L259:
	.word	shadowOAM
	.size	drawPBullet, .-drawPBullet
	.align	2
	.global	initEnemy
	.syntax unified
	.arm
	.fpu softvfp
	.type	initEnemy, %function
initEnemy:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r3, r4, r5, r6, r7, r8, r9, r10, fp, lr}
	mov	r5, #0
	mov	r6, #1
	ldr	r4, .L265
	ldr	r7, .L265+4
	ldr	r10, .L265+8
	ldr	r9, .L265+12
	ldr	r8, .L265+16
.L262:
	mov	r3, #16
	str	r3, [r4, #28]
	str	r3, [r4, #24]
	mov	lr, pc
	bx	r7
	smull	fp, ip, r0, r8
	asr	r2, r0, #31
	rsb	r3, r2, ip, asr #6
	rsb	r2, r3, r3, lsl #5
	rsb	r3, r3, r2, lsl #2
	sub	r3, r0, r3, lsl #2
	str	r3, [r4, #8]
	mov	lr, pc
	bx	r7
	mov	r1, #0
	smull	fp, ip, r0, r8
	asr	r2, r0, #31
	rsb	r3, r2, ip, asr #6
	rsb	r2, r3, r3, lsl #5
	rsb	r3, r3, r2, lsl #2
	add	r5, r5, #1
	sub	r3, r0, r3, lsl #2
	str	r5, [r4, #56]
	str	r3, [r4, #12]
	str	r1, [r4, #32]
	str	r1, [r4, #44]
	str	r6, [r4, #16]
	str	r6, [r4, #20]
	str	r6, [r4, #68]
	str	r6, [r4, #48]
	mov	lr, pc
	bx	r7
	ldr	r2, [r4, #8]
	cmp	r0, #0
	ldr	r3, [r4, #12]
	ldr	ip, [r10]
	ldr	r1, [r9]
	and	r0, r0, #1
	rsblt	r0, r0, #0
	sub	r2, r2, ip
	cmp	r5, #2
	sub	r3, r3, r1
	str	r0, [r4, #36]
	stm	r4, {r2, r3}
	mov	r5, #1
	add	r4, r4, #72
	bne	.L262
	pop	{r3, r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L266:
	.align	2
.L265:
	.word	enemies
	.word	rand
	.word	vOff
	.word	hOff
	.word	558694933
	.size	initEnemy, .-initEnemy
	.align	2
	.global	updateEnemy
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateEnemy, %function
updateEnemy:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, [r0, #68]
	cmp	r3, #0
	bxeq	lr
	b	updateEnemy.part.2
	.size	updateEnemy, .-updateEnemy
	.align	2
	.global	drawEnemy
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawEnemy, %function
drawEnemy:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, [r0, #28]
	ldr	r2, [r0]
	rsb	r3, r3, #0
	cmp	r2, r3
	ldr	r3, [r0, #56]
	ble	.L279
	str	lr, [sp, #-4]!
	ldr	lr, [r0, #4]
	cmp	lr, #239
	cmple	r2, #159
	movle	r1, #1
	movgt	r1, #0
	ldr	ip, [r0, #24]
	rsb	ip, ip, #0
	cmp	lr, ip
	movle	r1, #0
	andgt	r1, r1, #1
	cmp	r1, #0
	bne	.L283
.L270:
	mov	r1, #512
	ldr	r2, .L284
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
.L269:
	ldr	lr, [sp], #4
	bx	lr
.L279:
	mov	r1, #512
	ldr	r2, .L284
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
	bx	lr
.L283:
	ldr	r1, [r0, #68]
	cmp	r1, #0
	beq	.L270
	mov	ip, #4
	ldr	r0, .L284
	lsl	lr, lr, #23
	lsl	r3, r3, #3
	lsr	lr, lr, #23
	add	r1, r0, r3
	orr	lr, lr, #16384
	and	r2, r2, #255
	strh	r2, [r0, r3]	@ movhi
	strh	lr, [r1, #2]	@ movhi
	strh	ip, [r1, #4]	@ movhi
	b	.L269
.L285:
	.align	2
.L284:
	.word	shadowOAM
	.size	drawEnemy, .-drawEnemy
	.align	2
	.global	initLives
	.syntax unified
	.arm
	.fpu softvfp
	.type	initLives, %function
initLives:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #0
	push	{r4, r5, r6, r7, r8, lr}
	ldr	r8, .L290
	mov	r7, #145
	mov	r0, r2
	mov	r3, r8
	mov	r1, #60
	mov	ip, #16
	mov	r6, #1
	ldr	r4, .L290+4
	ldr	lr, .L290+8
	ldr	r4, [r4]
	ldr	r5, [lr]
	sub	r4, r7, r4
.L287:
	str	r2, [r3, #12]
	sub	lr, r2, r5
	add	r2, r2, #14
	cmp	r2, #70
	str	r1, [r3, #56]
	str	ip, [r3, #28]
	str	ip, [r3, #24]
	str	r7, [r3, #8]
	str	r0, [r3, #16]
	str	r0, [r3, #20]
	str	r6, [r3, #68]
	str	r4, [r3]
	str	lr, [r3, #4]
	add	r1, r1, #1
	add	r3, r3, #72
	bne	.L287
	str	r0, [r8, #356]
	str	r0, [r8, #284]
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L291:
	.align	2
.L290:
	.word	lives
	.word	vOff
	.word	hOff
	.size	initLives, .-initLives
	.align	2
	.global	drawLives
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawLives, %function
drawLives:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, [r0, #68]
	cmp	r3, #0
	ldr	r3, [r0, #56]
	bne	.L299
	mov	r1, #512
	ldr	r2, .L300
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
	bx	lr
.L299:
	str	lr, [sp, #-4]!
	mov	lr, #6
	ldr	r2, [r0, #12]
	ldr	ip, .L300
	lsl	r2, r2, #23
	ldrb	r0, [r0, #8]	@ zero_extendqisi2
	lsl	r3, r3, #3
	lsr	r2, r2, #23
	add	r1, ip, r3
	orr	r2, r2, #16384
	strh	lr, [r1, #4]	@ movhi
	strh	r0, [ip, r3]	@ movhi
	strh	r2, [r1, #2]	@ movhi
	ldr	lr, [sp], #4
	bx	lr
.L301:
	.align	2
.L300:
	.word	shadowOAM
	.size	drawLives, .-drawLives
	.align	2
	.global	initGEmojis
	.syntax unified
	.arm
	.fpu softvfp
	.type	initGEmojis, %function
initGEmojis:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	mov	r6, #105
	mov	r9, #16
	mov	r5, #1
	ldr	r4, .L306
	ldr	r8, .L306+4
	ldr	fp, .L306+8
	ldr	r10, .L306+12
	ldr	r7, .L306+16
	sub	sp, sp, #12
.L303:
	str	r9, [r4, #28]
	str	r9, [r4, #24]
	mov	lr, pc
	bx	r8
	smull	r2, r3, r0, r7
	stm	sp, {r2-r3}
	ldr	r3, [sp, #4]
	asr	r2, r0, #31
	rsb	r3, r2, r3, asr #6
	rsb	r2, r3, r3, lsl #5
	rsb	r3, r3, r2, lsl #2
	sub	r3, r0, r3, lsl #2
	str	r3, [r4, #8]
	mov	lr, pc
	bx	r8
	smull	r2, r3, r0, r7
	stm	sp, {r2-r3}
	ldr	r3, [sp, #4]
	asr	r2, r0, #31
	rsb	r3, r2, r3, asr #6
	rsb	r2, r3, r3, lsl #5
	rsb	r3, r3, r2, lsl #2
	ldr	r1, [r10]
	ldr	r2, [r4, #8]
	ldr	ip, [fp]
	sub	r3, r0, r3, lsl #2
	sub	r1, r3, r1
	sub	r2, r2, ip
	cmp	r6, #106
	str	r5, [r4, #16]
	str	r5, [r4, #20]
	str	r5, [r4, #68]
	str	r6, [r4, #56]
	str	r3, [r4, #12]
	str	r1, [r4, #4]
	str	r2, [r4]
	add	r4, r4, #72
	bne	.L304
	add	sp, sp, #12
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L304:
	mov	r6, #106
	b	.L303
.L307:
	.align	2
.L306:
	.word	goodEmojis
	.word	rand
	.word	vOff
	.word	hOff
	.word	558694933
	.size	initGEmojis, .-initGEmojis
	.align	2
	.global	initGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	initGame, %function
initGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, lr}
	mov	r5, #196
	mov	r7, #109
	bl	initPlayer
	mov	r4, #2
	bl	initPBullets
	bl	initEnemy
	bl	initLives
	mov	r0, #1
	mov	r1, #16
	mov	lr, #10
	mov	ip, #100
	ldr	r6, .L310
	ldr	r3, .L310+4
	ldr	r2, [r6]
	str	r5, [r3, #8]
	sub	r2, r5, r2
	ldr	r5, .L310+8
	str	r2, [r3]
	ldr	r2, [r5]
	str	r7, [r3, #12]
	sub	r2, r7, r2
	mov	r7, #3
	str	lr, [r3, #60]
	str	ip, [r3, #56]
	str	r2, [r3, #4]
	str	r0, [r3, #20]
	str	r0, [r3, #16]
	str	r1, [r3, #28]
	str	r1, [r3, #24]
	str	r4, [r3, #44]
	bl	initMediocre
	bl	initGEmojis
	mov	r2, #0
	mov	lr, #31744
	mov	ip, #992
	mov	r0, #31
	mvn	r1, #32768
	ldr	r3, .L310+12
	str	r4, [r3]
	ldr	r3, .L310+16
	str	r7, [r3]
	ldr	r3, .L310+20
	str	r2, [r6]
	str	r2, [r5]
	strh	r2, [r3, #244]	@ movhi
	ldr	r2, .L310+24
	strh	lr, [r3, #246]	@ movhi
	strh	ip, [r3, #248]	@ movhi
	strh	r0, [r3, #250]	@ movhi
	strh	r1, [r3, #252]	@ movhi
	strh	r2, [r3, #254]	@ movhi
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L311:
	.align	2
.L310:
	.word	vOff
	.word	crush
	.word	hOff
	.word	enemiesRemaining
	.word	livesRemaining
	.word	83886336
	.word	15855
	.size	initGame, .-initGame
	.align	2
	.global	updateGEmojis
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateGEmojis, %function
updateGEmojis:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, [r0, #8]
	cmp	r2, #1
	push	{r4, lr}
	ldr	ip, [r0, #16]
	ble	.L313
	ldr	r3, [r0, #28]
	add	r3, r2, r3
	cmp	r3, #512
	bge	.L313
.L314:
	ldr	r3, [r0, #12]
	cmp	r3, #1
	ldr	r1, [r0, #20]
	ble	.L315
	ldr	lr, [r0, #24]
	add	lr, r3, lr
	cmp	lr, #512
	blt	.L316
.L315:
	rsb	r1, r1, #0
	str	r1, [r0, #20]
.L316:
	ldr	r4, .L318
	ldr	lr, .L318+4
	ldr	r4, [r4]
	ldr	lr, [lr]
	add	r2, r2, ip
	add	r3, r3, r1
	sub	ip, r2, r4
	sub	r1, r3, lr
	str	r2, [r0, #8]
	str	r3, [r0, #12]
	str	ip, [r0]
	str	r1, [r0, #4]
	pop	{r4, lr}
	bx	lr
.L313:
	rsb	ip, ip, #0
	str	ip, [r0, #16]
	b	.L314
.L319:
	.align	2
.L318:
	.word	vOff
	.word	hOff
	.size	updateGEmojis, .-updateGEmojis
	.align	2
	.global	updateGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateGame, %function
updateGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	bl	updatePlayer
	bl	updateCrush
	ldr	r3, .L340
	ldr	r0, .L340+4
	ldr	r2, .L340+8
	add	r1, r3, #1072
	mov	ip, #0
	ldr	r5, [r0]
	ldr	r4, [r2]
	add	r1, r1, #8
	b	.L323
.L321:
	str	ip, [r3, #68]
	add	r3, r3, #72
	cmp	r1, r3
	beq	.L337
.L323:
	ldr	r2, [r3, #68]
	cmp	r2, #0
	beq	.L321
	ldr	r2, [r3, #4]
	ldr	r0, [r3, #24]
	add	r2, r2, r0
	cmp	r2, #238
	bgt	.L321
	ldr	r2, [r3, #12]
	ldr	lr, [r3, #20]
	ldr	r0, [r3, #8]
	add	r2, r2, lr
	sub	lr, r2, r4
	sub	r0, r0, r5
	str	r2, [r3, #12]
	stm	r3, {r0, lr}
	add	r3, r3, #72
	cmp	r1, r3
	bne	.L323
.L337:
	ldr	r4, .L340+12
	ldr	r3, [r4, #68]
	cmp	r3, #0
	bne	.L338
	ldr	r3, [r4, #140]
	cmp	r3, #0
	bne	.L339
.L325:
	ldr	r0, .L340+16
	bl	updateMediocre
	ldr	r0, .L340+20
	bl	updateMediocre
	ldr	r0, .L340+24
	bl	updateMediocre
	ldr	r0, .L340+28
	bl	updateMediocre
	ldr	r0, .L340+32
	bl	updateGEmojis
	ldr	r0, .L340+36
	pop	{r4, r5, r6, lr}
	b	updateGEmojis
.L338:
	mov	r0, r4
	bl	updateEnemy.part.2
	ldr	r3, [r4, #140]
	cmp	r3, #0
	beq	.L325
.L339:
	ldr	r0, .L340+40
	bl	updateEnemy.part.2
	b	.L325
.L341:
	.align	2
.L340:
	.word	pbullets
	.word	vOff
	.word	hOff
	.word	enemies
	.word	mediocres
	.word	mediocres+72
	.word	mediocres+144
	.word	mediocres+216
	.word	goodEmojis
	.word	goodEmojis+72
	.word	enemies+72
	.size	updateGame, .-updateGame
	.align	2
	.global	drawGEmojis
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawGEmojis, %function
drawGEmojis:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, [r0, #28]
	ldr	r2, [r0]
	rsb	r3, r3, #0
	cmp	r2, r3
	ldr	r3, [r0, #56]
	ble	.L352
	str	lr, [sp, #-4]!
	ldr	lr, [r0, #4]
	cmp	lr, #239
	cmple	r2, #159
	movle	r1, #1
	movgt	r1, #0
	ldr	ip, [r0, #24]
	rsb	ip, ip, #0
	cmp	lr, ip
	movle	r1, #0
	andgt	r1, r1, #1
	cmp	r1, #0
	bne	.L356
.L343:
	mov	r1, #512
	ldr	r2, .L357
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
.L342:
	ldr	lr, [sp], #4
	bx	lr
.L352:
	mov	r1, #512
	ldr	r2, .L357
	lsl	r3, r3, #3
	strh	r1, [r2, r3]	@ movhi
	bx	lr
.L356:
	ldr	r1, [r0, #68]
	cmp	r1, #0
	beq	.L343
	mov	ip, #2
	ldr	r0, .L357
	lsl	lr, lr, #23
	lsl	r3, r3, #3
	lsr	lr, lr, #23
	add	r1, r0, r3
	orr	lr, lr, #16384
	and	r2, r2, #255
	strh	r2, [r0, r3]	@ movhi
	strh	lr, [r1, #2]	@ movhi
	strh	ip, [r1, #4]	@ movhi
	b	.L342
.L358:
	.align	2
.L357:
	.word	shadowOAM
	.size	drawGEmojis, .-drawGEmojis
	.align	2
	.global	drawGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawGame, %function
drawGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r1, .L368
	ldr	r3, [r1, #4]
	ldr	r2, [r1, #44]
	lsl	r3, r3, #23
	push	{r4, r5, r6, r7, r8, lr}
	ldrb	r1, [r1]	@ zero_extendqisi2
	ldr	r6, .L368+4
	lsr	r3, r3, #23
	orr	r3, r3, #16384
	lsl	r2, r2, #6
	strh	r3, [r6, #2]	@ movhi
	strh	r1, [r6]	@ movhi
	strh	r2, [r6, #4]	@ movhi
	bl	drawCrush
	ldr	r4, .L368+8
	add	r5, r4, #1072
	add	r5, r5, #8
.L360:
	mov	r0, r4
	add	r4, r4, #72
	bl	drawPBullet
	cmp	r5, r4
	bne	.L360
	ldr	r0, .L368+12
	bl	drawEnemy
	ldr	r0, .L368+16
	bl	drawEnemy
	mov	r5, #6
	mov	lr, #512
	ldr	r3, .L368+20
	ldr	r4, .L368+24
	add	r0, r3, #360
.L363:
	ldr	r2, [r3, #68]
	cmp	r2, #0
	ldr	r2, [r3, #56]
	lsleq	r2, r2, #3
	strheq	lr, [r6, r2]	@ movhi
	bne	.L367
.L362:
	add	r3, r3, #72
	cmp	r3, r0
	bne	.L363
	ldr	r0, .L368+28
	bl	drawMediocre
	ldr	r0, .L368+32
	bl	drawMediocre
	ldr	r0, .L368+36
	bl	drawMediocre
	ldr	r0, .L368+40
	bl	drawMediocre
	ldr	r0, .L368+44
	bl	drawGEmojis
	ldr	r0, .L368+48
	bl	drawGEmojis
	ldr	r3, .L368+52
	mov	lr, pc
	bx	r3
	ldr	r4, .L368+56
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L368+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #67108864
	ldr	r2, .L368+60
	ldrh	r1, [r2]
	ldr	r2, .L368+64
	ldrh	r2, [r2]
	strh	r1, [r3, #16]	@ movhi
	pop	{r4, r5, r6, r7, r8, lr}
	strh	r2, [r3, #18]	@ movhi
	bx	lr
.L367:
	ldr	r1, [r3, #12]
	lsl	r2, r2, #3
	ldrb	r7, [r3, #8]	@ zero_extendqisi2
	and	r1, r1, r4
	add	ip, r6, r2
	orr	r1, r1, #16384
	strh	r7, [r6, r2]	@ movhi
	strh	r5, [ip, #4]	@ movhi
	strh	r1, [ip, #2]	@ movhi
	b	.L362
.L369:
	.align	2
.L368:
	.word	player
	.word	shadowOAM
	.word	pbullets
	.word	enemies
	.word	enemies+72
	.word	lives
	.word	511
	.word	mediocres
	.word	mediocres+72
	.word	mediocres+144
	.word	mediocres+216
	.word	goodEmojis
	.word	goodEmojis+72
	.word	waitForVBlank
	.word	DMANow
	.word	hOff
	.word	vOff
	.size	drawGame, .-drawGame
	.comm	shadowOAM,1024,4
	.global	cheat
	.global	won
	.global	collided
	.comm	vOff,4,4
	.comm	hOff,4,4
	.comm	livesRemaining,4,4
	.comm	enemiesRemaining,4,4
	.comm	enemies,144,4
	.comm	pbullets,1080,4
	.comm	lives,360,4
	.comm	mediocres,288,4
	.comm	crush,72,4
	.comm	player,72,4
	.comm	goodEmojis,144,4
	.bss
	.align	2
	.set	.LANCHOR0,. + 0
	.type	cheat, %object
	.size	cheat, 4
cheat:
	.space	4
	.type	collided, %object
	.size	collided, 4
collided:
	.space	4
	.type	won, %object
	.size	won, 4
won:
	.space	4
	.ident	"GCC: (devkitARM release 47) 7.1.0"
