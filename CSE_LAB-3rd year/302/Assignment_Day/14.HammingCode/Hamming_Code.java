    import java.util.*;
    import java.lang.*;
    class Hamming
    {
    public static void main(String args[])
    {
    int i=0,j,d=0,sum=0;
    int a[]=new int[7];
    int b[]=new int[11];
    int c[]=new int[11];
    int p[]=new int[4];
    Scanner sr=new Scanner(System.in);
    System.out.println("Enter the data code:");
    for(i=0;i<7;i++)
    {
    a[i]=sr.nextInt();
    }
    System.out.println("");
    System.out.println("data code is:");
     
    for(i=0;i<7;i++)
     
    {
    System.out.print(a[i]);
    }
     
    for(j=0;j<11;j++)
    {
    b[j]=0;
     
    }
     
    if(((a[0]+a[1]+a[3]+a[4]+a[6])%2)==0)
    b[0]=0;
    else
    b[0]=1;
     
    if(((a[0]+a[2]+a[3]+a[5]+a[6])%2)==0)
    b[1]=0;
    else
    b[1]=1;
     
    if(((a[1]+a[2]+a[3])%2)==0)
    b[3]=0;
    else
    b[3]=1;
     
    if(((a[4]+a[5]+a[6])%2)==0)
    b[7]=0;
    else
    b[7]=1;
     
    System.out.println("");	
    for(j=0,i=0;j<11;)	
    {
    if(j==0||j==1||j==3||j==7)
    j++;
    else
    {
    b[j]=a[i];
    j++;
    i++;
    }	
    }
    System.out.println("");
    System.out.println("Hamming code for even parity is:");
    for(j=0;j<11;j++)
    {

    System.out.print(b[j]);
    }
     
    System.out.println("");
    System.out.println("");
    System.out.println("Enter hamming code: ");
     
    for(i=0;i<11;i++)
    {
    c[i]=sr.nextInt();
    }
     
    p[0]=c[0];
    p[1]=c[1];
    p[2]=c[3];
    p[3]=c[7];
     
    if((((c[2]+c[4]+c[6]+c[8]+c[10])%2)==0 && p[0]==0)||(((c[2]+c[4]+c[6]+c[8]+c[10])%2)!=0 && p[0]==1))
    p[0]=0;
    else
    p[0]=1;
     
    if((((c[2]+c[5]+c[6]+c[9]+c[10])%2)==0 && p[1]==0)||(((c[2]+c[5]+c[6]+c[9]+c[10])%2)!=0 && p[1]==1))
    p[1]=0;
    else
    p[1]=1;
     
    if((((c[4]+c[5]+c[6])%2)==0 && p[2]==0)||(((c[4]+c[5]+c[6])%2)!=0 && p[2]==1))
    p[2]=0;
    else
    p[2]=1;
     
    if((((c[8]+c[9]+c[10])%2)==0 && p[3]==0)||(((c[8]+c[9]+c[10])%2)!=0 && p[3]==1))
    p[3]=0;
    else
     
    p[3]=1;	
    for(i=3;i>=0;i--)
    {	
    d=d+(p[i]*(int)Math.pow(2,i));	
    }
    System.out.println("");	
    if(d==0)
    System.out.println("The data code is correctly received");	
    else
    {
    System.out.println("The "+d+" bit is wrongly received");
    if(c[d-1]==0)
    c[d-1]=1;
    else
    c[d-1]=0;
    System.out.println("");
    System.out.println("The correct hamming code is ");
    for(i=0;i<11;i++)
    {
    System.out.print(c[i]);
    }
    }
    }	
    }
    /*
     1
     1
     0
     0
     0
     1
     0
	
	
	0
	0
	1
	1
	1
	0
	0
	1
	0
	1
	0
     
    
    1
	0
	1
	1
	1
	0
	0
	1
	0
	1
	0 
     
     
     */