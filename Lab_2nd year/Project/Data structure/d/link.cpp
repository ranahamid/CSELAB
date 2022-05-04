#include<stdio.h>
#include<stdlib.h>
#define max 100

struct node{
       int info;
       node  *next;
       };
       typedef node *nodeptr;

nodeptr np;

nodeptr getnode()
{
nodeptr q;
q=(nodeptr) malloc(sizeof(struct node));
return q;
}


nodeptr insertnode(int value,nodeptr ptr)
{
nodeptr q;
      q=getnode();
      q->info=value;
      ptr->next=q;
      return q;   
}

int main()
{
    int n;
    nodeptr start,ptr,next;
    start=getnode();
    ptr=start;
    printf("Insert number.. Enter -1 to terminate\n");
    do{
     scanf("%d",&n);
     if(n>0)
     ptr=insertnode(n,ptr);
     //ptr=start->next;
     }while(n!=-1);
ptr->next=0;                
ptr=start->next;
printf("Numbers are..");

//ptr=start;

while(ptr!=0)
{
printf("%d ",ptr->info);
ptr=ptr->next;
}
printf("\n");
system("PAUSE");
}
