#include<stdio.h>
#include<iostream>
#include<cstdlib>
using namespace std;


void addNode(struct node *head);
void printList(struct node *head);

struct node
{
       int x;
       struct node *next;
};


int main()
{
    struct node *head;
    head=( struct node*) malloc(sizeof( struct node));
 
//Insert into the link list   
    cout<<"Insert into the link list."<<endl;
    cout<<"Enter -1 for exit"<<endl;
    addNode(head);
    
//Print the link list     
    printList(head);
    free(head);
    
    cout<<endl;
    system("PAUSE");
}


//Insert into the link list  
void addNode(struct node *head)
{
     
     scanf("%d",&head->x);
     if(head->x==-1)
     head->next=NULL;
     else
        {
        head->next=( struct node*) malloc(sizeof( struct node));
        addNode(head->next);
        }
}

//Print the link list  
void printList(struct node *head)
{
     cout<<"The elements are.."<<endl;
     while(head->next!=NULL)
        {
        cout<<head->x<<"  ";
        head=head->next;
        }
}
