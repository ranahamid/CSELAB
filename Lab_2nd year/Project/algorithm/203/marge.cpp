#include<stdio.h>
#include<conio.h>
void marge(int a[],int p,int q,int r)
{
     int n1,n2,i,j,k;
     n1=q-p+1;
     n2=r-q;
     int L[100],R[100];
     for(i=1;i<=n1;i++)
       L[i]=a[p+i-1];
     for(i=1;i<=n2;i++)
       R[i]=a[q+i];
       L[n1+1]=32666;
       R[n2+1]=32666;
       i=1;
       j=1;
       for(k=p;k<=r;k++)
       {
          if(L[i]<=R[j])
         {
            a[k]=L[i];
            i=i+1;
            }
            
         else
           {
               a[k]=R[j];
               j=j+1;
               
           }
           
           }
           
           }
           
           void margesort(int a[],int p,int r)
           {
                
              int q;
              if(p<r)
              {
                     q=(p+r)/2;
                     margesort(a,p,q);
                     margesort(a,q+1,r);
                     marge(a,p,q,r);
              }
              
              }
              
          int main()
//          {
//              int main()
              {
                  int a[165],n,i;
                  printf("Enter the number of element=");
                  scanf("%d",&n);
                  for(i=1;i<=n;i++)
                  {
                       scanf("%d",&a[i])
                  }
                margesort (a,i,n)
                printf("after sorting the element are ");
              for(i=1;i<=n;i++)
              printf("%d",a[i])
              scanf("%d",&i);
              return 0;
              getch();
              
              }                  
                                                           
         
         
          
