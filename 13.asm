model SMALL
stack 100h
dataseg
shu dw 3,4,5,6,7,8,9,10,11,12
he dw ?
codeseg
start:
startupcode

lea si,shu;
mov bx,[si]
mov cx,10
mov ax,0

pan:

test bx,1

jz anrot

jnz rot

rot: add ax,bx
anrot:
inc bx
loop pan;
mov he,ax
quit:
exitcode 0
end 
