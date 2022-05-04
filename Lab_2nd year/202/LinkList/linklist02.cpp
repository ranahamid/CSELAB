#include<stdio.h>
#include<iostream>
#include<cstdlib>

using namespace std;



struct node
{
       int x;
       struct node *next;
};


void addNode(struct node *list);
void printList(struct node *head);


struct node* findNode(struct node *head,int key);


int main()
{
    int key;
    struct node *head;
    head=( struct node*) malloc(sizeof( struct node));
  

//Insert into the link list   
    cout<<"Insert into the link list."<<endl;
    cout<<"Enter -1 for exit"<<endl;
    addNode(head);
    
//Print the link list     
    printList(head);
   
//find node
cout<<endl;
cout<<"Input the number which you wanted to search"<<endl;
scanf("%d",&key);

struct node *n1=findNode(head,key);
if(n1==NULL)
cout<<"Not Found"<<endl;
else
cout<<"Found at location : "<<n1<<endl;


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
        head->next=(node*) malloc(sizeof(node));
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

//find node
struct node* findNode(struct node *head,int key)
{
     if(head->x==key)    
          return (head);
     else if(head->next==NULL)
          return(NULL);
     else
         return findNode(head->next,key);
}
