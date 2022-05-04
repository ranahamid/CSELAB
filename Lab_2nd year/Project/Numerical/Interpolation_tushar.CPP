//Interpolation :
//Roll : 10115413

#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int i);
int main(){
    
    int i, j, k, n; 
    float h, x0, qx=0, sum=1;
    float x[100], d[100][99];
   
       printf("\tEnter the number of element: ");
          scanf("%d",&n);  
          n=n-1; 
       printf("\tEnter X's value: ");
          for(i=0;i<=n;i++)
          scanf(" %f",&x[i]);
           h=x[1]-x[0];
       printf("\tEnter Y's value: ");      
          for(i=0;i<=n;i++)
          scanf(" %f",&d[0][i]); 
       printf("\tEnter x :");
          scanf(" %f",&x0);
          
//Making forward table by 2D array.
//Where y0,dy0,d2y0...R 1st column in 2Darray.

       for(i=1;i<=n;i++)
       {
       k=1;   
       for(j=0;j<=(n-i);j++)
          {    
               d[i][j]=d[i-1][k]-d[i-1][k-1];
               k++;  
          }
       } 
       
                  
       for(i=0;i<=n;i++)
       {        
           qx=qx+(d[i][0]*sum)/(fact(i)*pow(h,i));
           sum=sum*(x0-x[i]);
       }
                    
printf("\n\tCorrect Ans: %.5f ",qx);
getch();  return 0;  }


    int fact(int i)
    {
        if(i==0||i==1)return 1;
        else return i*fact(i-1);
    } 
        
        
        
        
  /*****************************//* 
   for(i=0;i<=n;i++){ for(j=0;j<=(n-i);j++)
      printf("\t%.2f",d[i][j]);
      printf("\n");
      } 
   INPUTS:------------------------>
  /*****************************//* 
   Element: 5    
   X:1891  1901  1911  1921  1931
   Y: 46    66    81    93   101
   x:1895    |  x:1925
   Ans:54.85 |  Ans:96.84
  /*****************************//*
   Element: 7
   X:  3    4    5     6     7     8     9
   Y: 2.7  6.4  12.5  21.6  34.3  51.2  72.9 
   x:10   
   Ans:100
  /*****************************/   
      
      
      
      
      
