.MODEL SMALL
.STACK 0100H
.DATA
MSG  DB  0DH,0AH, ' ENTER THE STRING :  $'
MSG2 DB  0DH,0AH, ' YOUR STRING IS   :  $'
STR1 DB  255 DUP(?)
ONE  DB ?
TWO  DB ?
.CODE
MAIN PROC
BEGIN:
          MOV AX,@DATA
          MOV DS,AX

          LEA DX,MSG
          MOV AH,9
          INT 21H

          LEA SI,STR1
          MOV AH,1

READ:
          INT 21H
        
          CMP AL,0DH
          JE  DISPLAY

          XOR AL,20H
          MOV [SI],AL
          INC SI
          JMP READ
		  
DISPLAY:

          MOV AL,'$'
          MOV [SI],AL

          LEA DX,MSG2
          MOV AH,9
          INT 21H

          LEA DX,STR1
          MOV AH,9
          INT 21H
		  
MOV AH,4CH
INT 21H

MAIN ENDP 
END MAIN