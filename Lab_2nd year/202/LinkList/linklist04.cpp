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
    int test=1,key;
    struct node *head;
//    head=( struct node*) malloc(sizeof( struct node));
    head=new(struct node);
while(test!=5)
{    
    cout<<endl<<endl;
    cout<<"Press 1 for Insert into the link list "<<endl;
    cout<<"Press 2 for search in  the link list "<<endl;
    cout<<"Press 3 for delete from  the link list "<<endl;
    cout<<"Press 4 for Print the link list  "<<endl;
    cout<<"Press 5 for exit fromo the link list  "<<endl;
     cout<<endl<<endl;
     
     scanf("%d",&test);
  
if(test==1)
{
//Insert into the link list   
    cout<<"Insert into the link list."<<endl;
    cout<<"Enter -1 for exit"<<endl;
    addNode(head);
}   


if(test==4)
{ 
//Print the link list     
    printList(head);
}

if(test==2)
{   
//find node
cout<<endl;
cout<<"Input the number which you wanted to search"<<endl;

scanf("%d",&key);

struct node *n1=findNode(head,key);
if(n1==NULL)
cout<<"Not Found"<<endl;
else
cout<<"Found at location : "<<n1<<endl;
}


if(test==3)
{
//delete node
struct node *p;
cout<<"Enter the elements which you want to delete"<<endl;
scanf("%d",&key);
if(head->x==key)
    {
    p=head->next;
    free(head);
    head=p;
    }
    ///////////////////////////////////////////////////////////////
    ///////problem occured here
    //delete only first and last element of the list
else
   {
   struct node *n1=findNode(head,key);
   if(n1==NULL)
      cout<<"Not Found"<<endl;                 
   else
       {
       p=n1->next->next;
       free(n1->next);
       n1->next=p;
       }
   }  
 ////////  ////////  ////////  ////////  ////////  ////////  ////////  ////////  
}  

} 
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
  
     if(head->next==NULL)
     printf("\nThere is no value in the list\n");
else
{   
    cout<<"The elements are.."<<endl;
     while(head->next!=NULL)
        {
        cout<<head->x<<"  ";
        head=head->next;
        }
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
