#include<stdio.h>
#include<conio.h>
int main(){
    
    int i,j,a[105],b[105],c[9999],k=9990,n;
    scanf("%d",&n); n=n-1;
    for(i=0;i<=n;i++)
       scanf("%d",&a[i]);
       
    for(i=0;i<k;i++)
    c[i]=0;
    for(i=0;i<=n;i++)
    c[a[i]]=c[a[i]]+1; 
       
    for(i=1;i<k;i++)
     c[i]=c[i]+c[i-1];
    
    for(i=n;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]=c[a[i]]-1;
        }
        
    for(i=0;i<=n;i++)
       printf("%d. ",b[i]);
    
    getch();
}
