TITLE TOGGLE_UPPER_CASE_AND_LOWER_CASE
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

          LEA DI,STR1
          MOV AH,1

READ:
          INT 21H
     
          CMP AL,0DH
          JE  DISPLAY
		  
		  CMP AL,65
		  JL READ3
		  
		  CMP AL,90
		  JL READ2
		  
		  CMP AL,97
		  JL READ3
		  CMP AL,122
		  JL READ2
		  jmp READ3

	
READ2:
		  XOR AL,20H
          MOV [DI],AL
          INC DI
          JMP READ
READ3:
		MOV [DI],AL
        INC DI
        JMP READ
		  
DISPLAY:

          MOV AL,'$'
          MOV [DI],AL

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