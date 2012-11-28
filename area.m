	
include(macro_defs.m)

define(radius_r, %f0)
define(area_r,%f1)
define(addr_r,%l0)
define(EOL, 10)

.data

pi:	.single	0r3.141592
prompt: .asciz "Please enter the radius: "
output: .asciz "The area of that circle is: "

.text

	local_var
	var(conv_s,4)

	begin_main
	
	set prompt,%o0
	call writeString
	nop
	
	call readFloat
	nop			!now have area in %f0(radius)

	set	pi, addr_r
	ld	[addr_r],area_r
	
	fmuls	area_r, radius_r, area_r 	!pi r squared (area*r*r)
	fmuls	area_r, radius_r, area_r

	set	output, %o0
	call	writeString
	nop

	st	area_r, [%fp + conv_s]
	ld	[%fp + conv_s], %o0
	call	writeFloat
	nop

	mov	EOL, %o0
	call	writeChar
	nop

	ret
	restore
	
