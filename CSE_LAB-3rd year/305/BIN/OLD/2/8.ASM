TITLE EVEN_ODD
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

CMP AL,'1'
JE EVEN_
CMP AL,'3'
JE EVEN_

CMP AL,'2'
JE ODD_
CMP AL,'4'
JE ODD_
JMP EXIT
ODD_:

MOV AH,2
MOV DL,'E'
INT 21H
JMP EXIT
EVEN_:

MOV AH,2
MOV DL,'O'
INT 21H

EXIT:
MOV AH,4CH
INT 21H

MAIN ENDP
	 END MAIN