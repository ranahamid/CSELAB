;big number
TITLE big number
.MODEL SMALL
.STACK 100H
.DATA
W DB 2,3,1,5,4,6,9
BIG DB 0
.CODE
MAIN PROC

MOV AX,@DATA
MOV ES,AX
MOV DS,AX


LEA SI,W
MOV CX,7;NUMBER OF ELEMENTS
CLD

SCAN:
	LODSB
	CMP CX,0
	JZ EXIT
	CMP AL,BIG
	JG BIG2
	LOOP SCAN
	JMP EXIT
BIG2:
	MOV BIG,AL
	loop SCAN
	
EXIT:
	MOV AL,BIG
	ADD AL,30H
	MOV DL,AL
	MOV AH,2
	INT 21H
	MOV AH,4CH
	INT 21H
MAIN ENDP
END MAIN