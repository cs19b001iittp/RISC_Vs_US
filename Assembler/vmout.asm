.section
.data
__main__data0:
	.asciz "Value of a is "
__main__data1:
	.asciz "\n"
__main__data2:
	.asciz "Value of b is "
__main__data3:
	.asciz "Operation: \n1. Sum (+)\n2. Product (*)\n3. Bitwise And (&)\n"
__main__data4:
	.asciz "Result for operation "
__main__data5:
	.asciz " is: "
__main__data6:
	.asciz "Invalid\n"
__main__data7:
	.asciz "\n"
.section
.text
jal x30,main
main:
lui x5,2
addi x5,x5,10
addi x5,x5,10
addi x5,x5,10
addi x5,x5,2
lui x6,2
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
add x6,x8,x6
sw x5,0(x6)
lui x5,2
addi x5,x5,181
addi x5,x5,181
addi x5,x5,181
addi x5,x5,1
lui x6,2
addi x6,x6,2
addi x6,x6,2
addi x6,x6,2
addi x6,x6,2
add x6,x8,x6
sw x5,0(x6)
lui x5,2
addi x5,x5,192
addi x5,x5,192
addi x5,x5,192
addi x5,x5,0
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x8,x6
sw x5,0(x6)
lui x5,2
addi x5,x5,362
addi x5,x5,362
addi x5,x5,362
addi x5,x5,2
lui x6,2
addi x6,x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,0
add x6,x8,x6
sw x5,0(x6)
lui x5,64
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
lui x6,2
addi x6,x6,8
addi x6,x6,8
addi x6,x6,8
addi x6,x6,0
add x6,x8,x6
sw x5,0(x6)
lui x2,2
addi x2,x2,362
addi x2,x2,362
addi x2,x2,362
addi x2,x2,2
add x2,x2,x8
lui x5,0
addi x5,x5,13
addi x5,x5,13
addi x5,x5,13
addi x5,x5,1
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,4
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,4
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,4
sw x5,0(x6)
lui x5,0
addi x5,x5,6
addi x5,x5,6
addi x5,x5,6
addi x5,x5,2
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,8
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,8
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,8
sw x5,0(x6)
lui x5,65552
addi x5,x5,0
addi x5,x5,0
lui x6,0
addi x6,x6,28
addi x6,x6,28
addi x6,x6,28
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,32
addi x6,x6,32
addi x6,x6,32
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,36
addi x6,x6,36
addi x6,x6,36
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,39
addi x6,x6,39
addi x6,x6,39
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,33
addi x6,x6,33
addi x6,x6,33
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,10
addi x6,x6,10
addi x6,x6,10
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,37
addi x6,x6,37
addi x6,x6,37
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,34
addi x6,x6,34
addi x6,x6,34
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,10
addi x6,x6,10
addi x6,x6,10
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,32
addi x6,x6,32
addi x6,x6,32
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,10
addi x6,x6,10
addi x6,x6,10
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,35
addi x6,x6,35
addi x6,x6,35
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,38
addi x6,x6,38
addi x6,x6,38
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,10
addi x6,x6,10
addi x6,x6,10
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x0,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,4
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,-4
lui x5,0xfffbf
addi x5,x5,1325
addi x5,x5,1325
addi x5,x5,1325
addi x5,x5,1
lui x28,0x00000
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
sw x28,0(x5)
lui x5,0xfffbf
addi x5,x5,1324
addi x5,x5,1324
addi x5,x5,1324
addi x5,x5,0
addi x2,x2,4
lw x6,0(x2)
addi x2,x2,-4
lui a7,0
addi a7,a7,0
addi a7,a7,0
addi a7,a7,0
addi a7,a7,1
ecall
lui a0,65552
addi a0,a0,0
addi a0,a0,15
addi a7,x0,4
ecall
lui a0,65552
addi a0,a0,0
addi a0,a0,17
addi a7,x0,4
ecall
lui x5,1048573
addi x5,x5,1364
addi x5,x5,1364
addi x5,x5,1364
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,8
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,-4
lui x5,0xfffbf
addi x5,x5,1274
addi x5,x5,1274
addi x5,x5,1274
addi x5,x5,2
lui x28,0x00000
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
sw x28,0(x5)
lui x5,0xfffbf
addi x5,x5,1273
addi x5,x5,1273
addi x5,x5,1273
addi x5,x5,1
addi x2,x2,4
lw x6,0(x2)
addi x2,x2,-4
lui a7,0
addi a7,a7,0
addi a7,a7,0
addi a7,a7,0
addi a7,a7,1
ecall
lui a0,65552
addi a0,a0,0
addi a0,a0,32
addi a7,x0,4
ecall
lui x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,1
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,12
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,12
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,16
sw x5,0(x6)
__L0:
lui x5,0
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,0
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,16
sw x5,0(x6)
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,16
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,16
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x6,0(x2)
addi x2,x2,-4
lw x5,0(x2)
blt x5,x6,___CL0
beq x5,x6,___CL0
addi x7,x0,0
jal x30,___CL1
___CL0:
addi x7,x0,1
___CL1:
sw x7,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,20
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,20
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,1
beq x5,x6,__L1
jal x30,__L2
__L3:
lui x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,1
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,20
sw x5,0(x6)
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,16
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,20
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
addi x2,x2,-4
lw x6,0(x2)
add x5,x6,x5
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,24
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,24
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,16
sw x5,0(x6)
jal x30,__L0
__L1:
lui x5,65552
addi x5,x5,0
addi x5,x5,90
lui x6,0
addi x6,x6,27
addi x6,x6,27
addi x6,x6,27
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,33
addi x6,x6,33
addi x6,x6,33
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,38
addi x6,x6,38
addi x6,x6,38
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,39
addi x6,x6,39
addi x6,x6,39
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,36
addi x6,x6,36
addi x6,x6,36
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,38
addi x6,x6,38
addi x6,x6,38
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,10
addi x6,x6,10
addi x6,x6,10
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,34
addi x6,x6,34
addi x6,x6,34
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,37
addi x6,x6,37
addi x6,x6,37
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,38
addi x6,x6,38
addi x6,x6,38
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,10
addi x6,x6,10
addi x6,x6,10
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,37
addi x6,x6,37
addi x6,x6,37
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,37
addi x6,x6,37
addi x6,x6,37
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,33
addi x6,x6,33
addi x6,x6,33
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,38
addi x6,x6,38
addi x6,x6,38
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,32
addi x6,x6,32
addi x6,x6,32
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,38
addi x6,x6,38
addi x6,x6,38
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,35
addi x6,x6,35
addi x6,x6,35
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,37
addi x6,x6,37
addi x6,x6,37
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,36
addi x6,x6,36
addi x6,x6,36
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,10
addi x6,x6,10
addi x6,x6,10
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x0,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,16
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,-4
lui x5,0xfffbf
addi x5,x5,1048
addi x5,x5,1048
addi x5,x5,1048
addi x5,x5,0
lui x28,0x00000
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
sw x28,0(x5)
lui x5,0xfffbf
addi x5,x5,1046
addi x5,x5,1046
addi x5,x5,1046
addi x5,x5,2
addi x2,x2,4
lw x6,0(x2)
addi x2,x2,-4
lui a7,0
addi a7,a7,0
addi a7,a7,0
addi a7,a7,0
addi a7,a7,1
ecall
lui a0,65552
addi a0,a0,0
addi a0,a0,112
addi a7,x0,4
ecall
lui x5,1048573
addi x5,x5,1364
addi x5,x5,1364
addi x5,x5,1364
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,16
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,28
sw x5,0(x6)
lui x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,1
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,32
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,28
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,32
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x6,0(x2)
addi x2,x2,-4
lw x5,0(x2)
beq x5,x6,___CL2
addi x7,x0,0
jal x30,___CL3
___CL2:
addi x7,x0,1
___CL3:
sw x7,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,36
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,36
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,1
beq x5,x6,__L5
jal x30,__L6
__L5:
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,4
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,8
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
addi x2,x2,-4
lw x6,0(x2)
add x5,x6,x5
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,24
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,24
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,12
sw x5,0(x6)
jal x30,__L4
__L6:
lui x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,2
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,40
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,28
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,40
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x6,0(x2)
addi x2,x2,-4
lw x5,0(x2)
beq x5,x6,___CL4
addi x7,x0,0
jal x30,___CL5
___CL4:
addi x7,x0,1
___CL5:
sw x7,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,44
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,44
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,1
beq x5,x6,__L7
jal x30,__L8
__L7:
lui x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,24
sw x5,0(x6)
lui x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,48
sw x5,0(x6)
lui x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,1
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,52
sw x5,0(x6)
__L10:
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,48
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,8
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x6,0(x2)
addi x2,x2,-4
lw x5,0(x2)
blt x5,x6,___CL6
addi x7,x0,0
jal x30,___CL7
___CL6:
addi x7,x0,1
___CL7:
sw x7,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,56
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,56
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,1
beq x5,x6,__L11
jal x30,__L12
__L11:
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,24
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,4
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
addi x2,x2,-4
lw x6,0(x2)
add x5,x6,x5
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,24
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,48
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,52
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
addi x2,x2,-4
lw x6,0(x2)
add x5,x6,x5
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,48
sw x5,0(x6)
jal x30,__L10
__L12:
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,24
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,12
sw x5,0(x6)
jal x30,__L4
__L8:
lui x5,0
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,0
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,60
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,28
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,60
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x6,0(x2)
addi x2,x2,-4
lw x5,0(x2)
beq x5,x6,___CL8
addi x7,x0,0
jal x30,___CL9
___CL8:
addi x7,x0,1
___CL9:
sw x7,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,64
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,64
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,0
addi x6,x6,1
beq x5,x6,__L13
jal x30,__L14
__L13:
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,4
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,8
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
addi x2,x2,-4
lw x6,0(x2)
and x5,x6,x5
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,48
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,48
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
addi x6,x6,1
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,12
sw x5,0(x6)
jal x30,__L4
__L14:
lui x5,65552
addi x5,x5,0
addi x5,x5,118
lui x6,0
addi x6,x6,24
addi x6,x6,24
addi x6,x6,24
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,36
addi x6,x6,36
addi x6,x6,36
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,39
addi x6,x6,39
addi x6,x6,39
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,32
addi x6,x6,32
addi x6,x6,32
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,36
addi x6,x6,36
addi x6,x6,36
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,35
addi x6,x6,35
addi x6,x6,35
addi x6,x6,0
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,33
addi x6,x6,33
addi x6,x6,33
addi x6,x6,1
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,30
addi x6,x6,30
addi x6,x6,30
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x6,0
addi x6,x6,36
addi x6,x6,36
addi x6,x6,36
addi x6,x6,2
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x6,0(x30)
addi x30,x30,4
sw x30,0(x7)
lui x7,2
addi x7,x7,8
addi x7,x7,8
addi x7,x7,8
addi x7,x7,0
lw x30,0(x7)
lui x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,1
sw x28,0(x30)
addi x30,x30,4
sw x0,0(x30)
addi x30,x30,4
sw x30,0(x7)
__L4:
lui x5,2
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
addi x5,x5,1
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,12
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,-4
lui x5,0xfffbf
addi x5,x5,1002
addi x5,x5,1002
addi x5,x5,1002
addi x5,x5,2
lui x28,0x00000
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
addi x28,x28,0
sw x28,0(x5)
lui x5,0xfffbf
addi x5,x5,1001
addi x5,x5,1001
addi x5,x5,1001
addi x5,x5,1
addi x2,x2,4
lw x6,0(x2)
addi x2,x2,-4
lui a7,0
addi a7,a7,0
addi a7,a7,0
addi a7,a7,0
addi a7,a7,1
ecall
lui a0,65552
addi a0,a0,0
addi a0,a0,127
addi a7,x0,4
ecall
jal x30,__L3
__L2:
lui x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
addi x5,x5,0
sw x5,0(x2)
addi x2,x2,4
addi x2,x2,-4
lw x5,0(x2)
lui x6,2
addi x6,x6,4
addi x6,x6,4
addi x6,x6,4
addi x6,x6,0
add x6,x6,x8
lw x6,0(x6)
addi x6,x6,56
sw x5,0(x6)
lui x5,2
addi x5,x5,4
addi x5,x5,4
addi x5,x5,4
addi x5,x5,0
add x5,x5,x8
lw x5,0(x5)
addi x5,x5,56
lw x5,0(x5)
sw x5,0(x2)
addi x2,x2,4
jal x30,__END__
__END__:
nop
