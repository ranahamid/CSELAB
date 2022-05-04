#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
//*******//*******//********//******//
struct node1{
       int a1;
       struct node1 *next1; 
       };

struct node{
       int a;
       struct node *next;
       struct node1 *adj;
       };       
struct node *head;

//******//******//*****//******//******//*******//
void addnode(struct node *link){                    
     scanf("%d",&link->a);
     if(link->a == -1)
         link->next=NULL;
     else{      
         link->next=(struct node*)malloc(sizeof(struct node));
         link->adj=NULL;     
         addnode(link->next);
         }} 
         
//*******//*******//********//******//
void addadj(struct node1 *link1){
      
          scanf("%d",&link1->a1);
          if(link1->a1 == -1)
         link1->next1=NULL;
     else{      
         link1->next1=(struct node1*)malloc(sizeof(struct node1));
         addadj(link1->next1);
         }}
         
//*******//*******//********//******//          
void printlist(struct node *head){
     struct node *phead;
     phead=head;
     printf("Eements are :\n\n");
     while(phead->a!=-1){
        printf("%d: ",phead->a);
          while(phead->adj->a1!=-1){
          printf("%d,",phead->adj->a1);
                phead->adj=phead->adj->next1;
                }
        printf("\n");
        phead=phead->next;         
      }}



int main(){
    struct node *phead;
    head=(struct node*)malloc(sizeof(struct node)); 
    phead=(struct node*)malloc(sizeof(struct node)); 
      phead=head;
      printf("Enter -1 for exit.\n\n");  
        addnode(head); 
        
      printf("Enter adj of recent nodes:\n\n");      
      while(phead->next!=NULL){ 
              printf("%d: ",phead->a);
              phead->adj=(struct node1*)malloc(sizeof(struct node1)); 
              addadj(phead->adj);
              phead=phead->next; 
              }
              
    printlist(head);       
    getch();
    return 0;          
    }
