#include<stdio.h>
#include<iostream>
#include<cstdlib>

using namespace std;



struct node
{
       int x;
       struct node *next;
};

int CountList(struct node *list,int key)
{
	int count=1;

	while(list->next!=NULL || list->x!=key)
	{
		count++;
		list=list->next;
	}

	return count;
}



void addNode(struct node *list);
void printList(struct node *head);


struct node* findNode(struct node *head,int key);


int main()
{ 
    int key,i;
     struct node *n2;
  
    struct node *head;
    head=( struct node*) malloc(sizeof( struct node));
  

//Insert into the link list   
    cout<<"Insert into the link list."<<endl;
    cout<<"Enter -1 for exit"<<endl;
    addNode(head);
    
//Print the link list     
    printList(head);
    
/*   
//find node
cout<<endl;
cout<<"Input the number which you wanted to search"<<endl;

scanf("%d",&key);

struct node *n1=findNode(head,key);
if(n1==NULL)
cout<<"Not Found"<<endl;
else
cout<<"Found at location : "<<n1<<endl;
*/


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
else
 ///////////////////////////////////////////////////////////////
    ///////problem occured here
    //delete only first and last element of the list
   {
   struct node *n1=findNode(head,key);
   if(n1==NULL)
      cout<<"Not Found"<<endl;
   else 
       { 
         n1=n1->next;
         struct node *k;
         k=n1-2;
         k=n1;        
       //p=n1->next->next;
      // n1=n1-1;
      //free(n1->next);
       //n1->next=p;
       }

   }  
////////  ////////  ////////  ////////  ////////  ////////  ////////  ////////  
     
//Print the link list     
    printList(head);
 ////////     
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


