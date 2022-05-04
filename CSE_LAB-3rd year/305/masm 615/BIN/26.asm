TITLE PRIME_TEST
.MODEL SMALL
.STACK 100H
.DATA
MSG DB 'INPUT A VALUE: $'
MSG1 DB 'ODD$'
MSG2 DB 'EVEN$'
LINE DB 0AH,0DH,'$'
STR1 DB 100 DUP(?)
VAL1 DB ?
VAL2 DB ?
W DB 2,5,7,7,4,1,8

VOW DB 'AEIOU'
SPACE DB ' '
CR EQU 0DH
LF EQU 0AH
CONS DB 'BCDFGHJKLMNPQRSTVWXYZ'
DIGIT DB '0123456789'
VMSG DB CR,LF,'VOWELS: $'
CMSG DB CR,LF,'CONSTANTS: $'
DMSG DB CR,LF,'DIGITS: $'
SMSG DB CR,LF,'SPACE: $'
VCOUNT DW 0
CCOUNT DW 0
SCOUNT DW 0
DCOUNT DW 0

STR1 DB 100 DUP(?)
STR2 DB 100 DUP(?)
.CODE
MAIN  PROC

MOV AX,@DATA
MOV DS,AX
MOV ES,AX

LEA DI,STR1
CALL IN_STR;BX=nO. OF CHAR
MOV VAL1,BL

LEA DI,STR2
CALL IN_STR;BX=nO. OF CHAR
MOV VAL2,BL
CLD
;STR1=MAIN
;STR2=SUB
CMP 

EXIT:
	MOV AH,4CH
	INT 21H
MAIN ENDP

SWAP PROC 

MOV AL,[DI]
XCHG AL,[SI]
MOV [DI],AL
RET
 SWAP ENDP
IN_STR PROC

XOR BX,BX
MOV AH,1
CLD
INPUT1:
	INT 21H
	CMP AL,0DH
	JZ EXIT1
	INC BX
	STOSB
	JMP INPUT1
EXIT1:
	RET

IN_STR ENDP
	END MAIN