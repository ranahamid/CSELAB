TITLE CASE_CONVERSION
.MODEL SMALL
.STACK 100H
.DATA
LF EQU 0AH
CR EQU 0DH
MSG1 DB "INSERT UPPER CASE LETTER : $" 
MSG2 DB "EQUIVALENT LOWER CASE IS : $"
CHAR DB ?,"$"

.CODE
MAIN PROC
MOV AX,@DATA
MOV DS,AX

MOV AH,9
LEA DX,MSG1
INT 21H

MOV AH,1
INT 21H
ADD AL,20H
MOV BL,AL

MOV AH,2
MOV DL,0AH
INT 21H
MOV DL,0DH
INT 21H

MOV AH,9
LEA DX,MSG2
INT 21H

MOV AH,2
MOV DL,BL
INT 21H

MOV AH,4CH
INT 21H

MAIN ENDP
     END MAIN