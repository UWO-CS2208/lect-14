	
 






.data

pi:	.single	0r3.141592
prompt: .asciz "Please enter the radius: "
output: .asciz "The area of that circle is: "

.text

	!local variables

	conv_s = -4

	.global	main
main:	save	%sp, -96, %sp
	
	set prompt,%o0
	call writeString
	nop
	
	call readFloat
	nop			!now have area in %f0(radius)

	set	pi, %l0
	ld	[%l0],%f1
	
	fmuls	%f1, %f0, %f1 	!pi r squared (area*r*r)
	fmuls	%f1, %f0, %f1

	set	output, %o0
	call	writeString
	nop

	st	%f1, [%fp + conv_s]
	ld	[%fp + conv_s], %o0
	call	writeFloat
	nop

	mov	10, %o0
	call	writeChar
	nop

	ret
	restore
	
