#include<cstdlib>
#include<cstring>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    
   	int i,j,k,n,m;
	char temp[100],*name[100],item[100];

	for(i=0;i<=100;i++)
	name[i]=(char *) malloc(sizeof(char)*100);

//clrscr();
	printf("\nHow many name : ");
	scanf("%d",&n);

	printf("\nEnter the name\n");
	for(i=0;i<=n;i++)
	{
    gets(name[i]);
    }
	
	
	do
{	
    cout<<"\nPress 1, 2, 3, or 4 to select..  "<<endl;
    cout<<"1. Insert which inserts a new string into its sort position."<<endl;
	cout<<"2. Delete which deletes an existing string."<<endl;
    cout<<"3. Find which searches the sequence for a given string."<<endl;
    cout<<"4. Print which prints the sequence strings."<<endl;
    cout<<"5. To exit "<<endl;
    cin>>m;
    
    cout<<endl<<"==================="<<endl<<endl;   
    
    //sorting


	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		{
		if ( strcmp(name[j],name[j+1])>=0 )
			{
			strcpy(temp,name[j]);
			strcpy(name[j],name[j+1]);
			strcpy(name[j+1],temp);
			}
		}
		
	//end of sorting
	
	
	
    //Insert
        if(m==1)
            {
            cout<<endl<<"==================="<<endl<<endl;   
             printf("\nInsert  a Name\n");
             cout<<"Enter the Name to Insert : \n";
	          scanf("%s",&item);
              strcpy(name[n+1],item);
              n++;
            //Insert   
            }
            
    //Delete
    else if(m==2)
            {
            cout<<endl<<"==================="<<endl<<endl;   
             printf("\nDelete  a Name\n");
             cout<<"Enter the Name to be delete : \n";
	         scanf("%s",&item);
	         int beg,end,mid;

	beg=1;
	end=n;
	mid=int((beg+end)/2);

	while((beg<=end) && (strcmp(name[mid],item)!=0))
					 {
					 if (strcmp(item,name[mid])<0)
						end=mid-1;
						else
						beg=mid+1;
						mid=int (((beg+mid)/2));
					 }

				if (strcmp(name[mid],item)==0)
				    {
				    for(i=mid;i<=n-1;i++)
				    name[i]=name[i+1];
				    n--;
                 //printf("\nLocation is %d in sorted sequence",mid);
                     }                 
                 else
				 printf("\nNot in the array to delete\n");
             //Delete   
            }
    
    
     //Find
     else if(m==3)
            {
     cout<<endl<<"==================="<<endl<<endl;   
             //Find   
             printf("\nSearch a Name\n");
             cout<<"Enter the Name to be search : ";
	scanf("%s",&item);
	int beg,end,mid;

	beg=1;
	end=n;
	mid=int((beg+end)/2);

	while((beg<=end) && (strcmp(name[mid],item)!=0))
					 {
					 if (strcmp(item,name[mid])<0)
						end=mid-1;
						else
						beg=mid+1;
						mid=int (((beg+mid)/2));
					 }

				if (strcmp(name[mid],item)==0)
				 printf("\nLocation is %d in sorted sequence\n",mid);
				 else
				 printf("\nNot in the array\n");
            }
            
            
     //Print
     else if(m==4)
            {
     cout<<endl<<"==================="<<endl<<endl;   
             //Print  
             if(n<=1)
             cout<<"There is no elements to show"<<endl;
             else
             printf("\nSorted Name\n");
	         for(i=1;i<n+1;i++)
            	{
           	printf("\nName %d :%s",i,name[i]);
              }
            }
      else if(m==5)
         { 
                   cout<<"Exit from DataBase"<<endl;
                   return 0;
         }      
     else 
       cout<<"Doesn't match to any value...\n";
cout<<endl<<"==================="<<endl<<endl;      
}    while(m!=5);
cout<<endl;
system("PAUSE");
}
