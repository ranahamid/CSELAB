TITLE DIVISION
.MODEL SMALL
.STACK 100
.DATA 
CR EQU 0DH
LF EQU 0AH
LINE DB CR,LF,'$'
MSG1 DB 'ENTER First NUMBER : ','$'
MSG2 DB 'ENTER Second NUMBER : ','$'
MSG3 DB 'RESULT: $ '
MSG4 DB 'QUOITIENT :$'
VAL1 DB ?
VAL2 DB ?
RES DB ?
QUO DB ?
.CODE
MAIN PROC
MOV AX,@DATA
            MOV DS,AX

            LEA DX,MSG1
            MOV AH,09H
            INT 21H
    
            MOV AH,1
            INT 21H
            SUB AL,30H
            MOV VAL1,AL
			
		    
			
			MOV AH,9
			LEA DX,LINE
			INT 21H 
			
            LEA DX,MSG2
            MOV AH,09H
            INT 21H
    
            MOV AH,1
            INT 21H
            SUB AL,30H
            MOV VAL2,AL
			
			
			MOV AH,9
			LEA DX,LINE
			INT 21H 
			
			MOV AH,00H
			MOV AL,VAL1
			MOV BL,VAL2
			DIV BL
			MOV QUO,AH
			MOV RES,AL
			
			LEA DX,MSG3
            MOV AH,09H
            INT 21H
		 
    	   MOV AL,RES
		   ADD AL,30H
           MOV DL,AL
		   MOV AH,2
		   INT 21H
	
		    LEA DX,LINE
            MOV AH,09H
            INT 21H
			
			 LEA DX,MSG4
            MOV AH,09H
            INT 21H
			
		   MOV AH,QUO
		   ADD AH,30H
           MOV DL,AH
    	   MOV AH,2
		   INT 21H
EXIT:
	MOV AH,4CH
	INT 21H
MAIN ENDP
	END MAIN