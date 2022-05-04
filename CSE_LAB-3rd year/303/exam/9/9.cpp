#include <stdio.h>
#include <iostream>

#include <graphics.h>
#define max 100

using namespace std;
//a+b*c

typedef struct tag
{
char info;
struct tag *left;
struct tag *right;
}node;

node* makenode(int n)
{
node *tree;
tree=new(node);
tree->info=n;
tree->left=NULL;
tree->right=NULL;
return tree;
}

/*
void p_out(int x,int y,node *root)
{

char bb[2]={'\0'};
bb[0]=root->info;
outtextxy(x,y,bb);

int xx=70;
if(root->left!=NULL)
   {
   line(x-2,y+5,x-xx+2,y+20-5);
   p_out(x-xx,y+20,root->left);
   }
if(root->right!=NULL)
   {
   line(x+2,y,x+xx-2,y+20-5);
   p_out(x+xx,y+20,root->right);
   }

}
*/


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
int i,j,k;



cout<<"Enter expression"<<endl;
gets(bin);
node *root,*temp,*temp2;
root=makenode(bin[0]);
int n=strlen(bin);

int gd=DETECT,gm;
initgraph(&gd,&gm,"");


for(i=1;i<n;i++)
   {
   temp2=makenode(bin[i]);
   temp=root;
   if(bin[i]>='a'&&bin[i]<='z')
        {
        while(temp->right!=NULL)
            temp=temp->right;
        temp->right=temp2;
        }
   else if(bin[i]=='+'||bin[i]=='-'||bin[i]=='*'||bin[i]=='/')
         {
         if(root->info>='a'&&root->info<='z')
              {
              temp2->left=root;
              root=temp2;

              }
         else if(root->info=='+'||root->info=='-'||root->info=='*'||root->info=='/')
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
         }
   }


p_out(240,50,root);
system("pause");
}
