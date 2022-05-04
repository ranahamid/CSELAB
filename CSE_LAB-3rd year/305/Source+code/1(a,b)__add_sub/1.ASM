TITLE ADDITION
.MODEL SMALL
.STACK 100
.DATA 
CR EQU 0DH
LF EQU 0AH
LINE DB  CR,LF,'$'
MSG1 DB 'ENTER First NUMBER : ','$'
MSG2 DB 'ENTER Second NUMBER : ','$'
VAL1 DB ?
VAL2 DB ?
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
			
			
			MOV BL,VAL1
			MOV AL,VAL2
			ADD AL,BL
			
		   ADD AX,30H
           MOV Dx,Ax
		   
		   MOV AH,2
		   INT 21H

EXIT:
	MOV AH,4CH
	INT 21H
MAIN ENDP
	END MAIN