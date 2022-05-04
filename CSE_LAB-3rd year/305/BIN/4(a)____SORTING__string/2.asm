;sorting
TITLE SORTING
.MODEL SMALL
.STACK 100H
.DATA
CR EQU 0DH
LF EQU 0AH
MSG1 DB 'INPUT STRING : $'
MSG2 DB 'OUTPUT STRING IS : $'
W DB 80 DUP (0)
LINE DB CR,LF,'$'
LEN DW 0
.CODE
MAIN PROC

MOV AX,@DATA
MOV ES,AX
MOV DS,AX


LEA DX,MSG1
MOV AH,9 
INT 21H

LEA DI,W
CALL READ_STR

LEA SI,W
MOV LEN,BX ;NUMBER OF ELEMENTS

LEA DX,LINE
MOV AH,9
INT 21H

;PROC SORT
DEC BX
JE END_SORT
MOV DX,SI

SORT_LOP:
	MOV SI,DX
	MOV CX,BX
	MOV DI,SI
	MOV AL,[DI]
FIND_BIG:
	INC SI
	CMP [SI],AL
	JNLE NEXT
	MOV DI,SI
	MOV AL,[DI]

NEXT:
	LOOP FIND_BIG
	CALL SWAP
	DEC BX
	JNE SORT_LOP
END_SORT:
	LEA SI,W
	MOV CX,LEN;NUMBER OF ELEMENTS
	JMP PRINT1
PRINT1:
	MOV DL,[SI]	
	ADD SI,1
	MOV AH,2
	INT 21H
	LOOP PRINT1
EXIT:
	MOV AH,4CH
	INT 21H
MAIN ENDP
;SWAP 

SWAP PROC
PUSH AX
MOV AL,[SI]
XCHG AL,[DI]
MOV [SI],AL
POP AX
RET
SWAP ENDP

READ_STR PROC

CLD
XOR BX,BX
MOV AH,1
INT 21H

READ:
	CMP AL,0DH
	JE EXIT2
	STOSB
	INC BX
	INT 21H
	JMP READ
EXIT2:
RET
READ_STR  ENDP 
END MAIN