;COUNT VOWEL AND CONSTANTS
TITLE 
.MODEL SMALL
.STACK 100H
.DATA
CR EQU 0DH
LF EQU 0AH
LINE DB CR,LF,'$'
STRING DB 80 DUP(0)
VOW DB 'AEIOU'
CONS DB 'BCDFGHJKLMNPQRSTVWXYZ'
VMSG DB CR,LF,'VOWELS: $'
CMSG DB CR,LF,'CONSTANTS: $'
VCOUNT DW 0
CCOUNT DW 0
.CODE

MAIN PROC

MOV AX,@DATA
MOV DS,AX
MOV ES,AX

LEA DI,STRING
CALL READ_STR;BX=NO OF CHAR
MOV SI,DI
CLD

FIRST2:
	LODSB 
	LEA DI,VOW
	MOV CX,5
	REPNE SCASB
	JNE CHECK_CONS
	INC VCOUNT
	JMP LAST2
CHECK_CONS:
	LEA DI,CONS
	MOV CX,21
	REPNE SCASB
	JNE LAST2
	INC CCOUNT
LAST2:
	DEC BX
	JNE FIRST2

MOV AH,9
LEA DX,VMSG
INT 21H
MOV AX,VCOUNT
CALL OUTDEC 

MOV AH,9
LEA DX,CMSG
INT 21H
MOV AX,CCOUNT
CALL OUTDEC 


	MOV AH,4CH
	INT 21H

MAIN ENDP
OUTDEC PROC
	PUSH AX
	PUSH BX
	PUSH CX
	PUSH DX
	
	OR AX,AX
	JGE FIRST1
	PUSH AX
	MOV DL,'-'
	MOV AH,2
	INT 21H
	POP AX
	NEG AX

FIRST1:
	XOR CX,CX;CX=NUMBER OF DIGIT
	MOV BX,10D
SEC:
	XOR DX,DX;HIGHER PART=0
	DIV BX;DX:AX=DX:AX/BX
	PUSH DX
	INC CX

	OR AX,AX
	JNE SEC
PRINT:
	MOV AH,2
	POP DX
	OR DL,30H
	INT 21H
	LOOP PRINT
	
	POP DX
	POP CX
	POP BX 
	POP AX
	RET
OUTDEC ENDP

READ_STR PROC
PUSH AX
PUSH DI

CLD
XOR BX,BX
MOV AH,1
INT 21H

READ:
	CMP AL,0DH
	JE EXIT
	CMP AL,8H
	JNE STORE
	
	DEC DI
	DEC BX
	JMP INPUT
STORE:
	STOSB
	INC BX
INPUT:
	MOV AH,1
	INT 21H
	JMP READ
EXIT:
POP DI
POP AX
RET
READ_STR  ENDP 

	 END MAIN