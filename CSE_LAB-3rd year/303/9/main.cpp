#include <stdio.h>
#include <iostream>
#include <graphics.h>
#define max 100

using namespace std;

typedef struct tag
{
    char info;
    struct tag* left;
    struct tag* right;
}node;

node* makenode(int element)
{
node *tree;
tree=new(node);
tree->info=element;
tree->left=NULL;
tree->right=NULL;
return tree;
}

void p_out(int x,int y,node *root)
{
int w=70;
char bb[2]={'\0'};
bb[0]=root->info;
outtextxy(x,y,bb);
if(root->left!=NULL)
   {
    line(x-2,y+5,x-w+2,y+20-5);
    p_out(x-w,y+20,root->left);
   }
if(root->right!=NULL)
   {
    line(x+2,y,x+w-2,y+20-5);
    p_out(x+w,y+20,root->right);
   }

}

int main( )
{

char bin[max];
int i,n,gd=DETECT,gm=0;

while(true){
cout<<"Enter the expression"<<endl;
cin>>bin;
n=strlen(bin);
node *root,*temp,*temp2;

root=makenode(bin[0]);

for(i=1;i<n;i++)
  {
   temp2=makenode(bin[i]);
   temp=root;
   if( (bin[i]>='a'&&bin[i]<='z')||(bin[i]>='A'&&bin[i]<='Z'))
       {
        while(temp->right!=NULL)
           {
           temp=temp->right;
           }
        temp->right=temp2;
       }//end of if bin[i]
   else if(bin[i]=='+'||bin[i]=='-'||bin[i]=='/'||bin[i]=='*')
   {
    if( (root->info>='a'&& root->info<='z')||(root->info>='A'&&root->info<='Z'))
            {
             temp2->left=root;
             root=temp2;
            }
     else if(root->info=='+'||root->info=='-'||root->info=='/'||root->info=='*')
        {
        if(bin[i]=='+'||bin[i]=='-')
             {
              temp2->left=root;
              root=temp2;
             }
        else
             {
             if(root->info=='+'||root->info=='-')
                   {
                   temp2->left=root->right;
                   root->right=temp2;
                   }
             else
                    {
                    temp2->left=root;
                    root=temp2;
                    }
             }
        }
   }//end of else if
  }//end of for i
initgraph(&gd,&gm,"");

p_out(240,50,root);

}}
