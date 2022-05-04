/*4.consider the following grammar
E->E+E|E-E|E*E|E/E|(E)|id write a program to generate
a syntax tree for the sentence
a+b*c where id->a|b|c.

  Input:-A+B*C or a+b*c

*/

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct tag
{
	char info;
	struct tag *left;
	struct tag *right;
}node;


node* makenode(char ele)
{
	node *tree;
	//tree=(node *)malloc(sizeof(node));
	tree=new(node);
	tree->info=ele;
	tree->left=NULL;
	tree->right=NULL;
	return tree;
}


void p_out(int x,int y,node *root)
{
   char bb[2]={'\0'};
   bb[0]=root->info;

   outtextxy(x,y,bb);
   int xx=70;
   //w=w+2;
   if(root->left!=NULL)
   {
     line(x-2,y+5,x-xx+2,y+20-5);
     p_out(x-xx,y+20,root->left);
   }
 if(root->right!=NULL)
    {
     line(x+2,y,x+xx+2,y+20-5);//here 2 is added only for line drawing
     p_out(x+xx,y+20,root->right);
    }

}


int main()
{
	node *root,*temp,*temp2;
	char bin[12];
	int n,i,gd=DETECT,gm=0;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	printf("\nenter expression:");
	scanf("%s",bin);
	n=strlen(bin);
	root=makenode(bin[0]);

	for(i=1;i<n;i++)
	{
		temp2=makenode(bin[i]);
		temp=root;
		if((bin[i]>='a'&&bin[i]<='z')||(bin[i]>='A'&&bin[i]<='Z'))
		{
			 while(temp->right!=NULL)
			   {
                temp=temp->right;
			   }
			temp->right=temp2;
		}
		else if(bin[i]=='+'||bin[i]=='-'||bin[i]=='*'||bin[i]=='/')
		{
		   if((root->info>='a'&&root->info<='z')||(root->info>='A'&&root->info<='Z'))
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
		   }//end of else if root->info +-*/
		}
	}//end of for

     //int w=2;
    p_out(250,50,root);//output
     getch();
     return 0;
}
