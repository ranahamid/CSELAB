TITLE 
.MODEL SMALL
.STACK 100H
.DATA
CR EQU 0DH
LF EQU 0AH
MSG DB CR,LF,'$'
.CODE

MAIN PROC

MOV AX,@DATA
MOV DS,AX

MOV AH,1
INT 21H

MOV CX,79
MOV DL,AL
MOV AH,2

LOOP_:
	INT 21H
	LOOP LOOP_ 

EXIT:
	MOV AH,4CH
	INT 21H

MAIN ENDP
	 END MAIN