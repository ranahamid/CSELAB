import java.util.Scanner.*;



class Main {
  
    public static void main (String args[])      {
    
    Scanner sc=new Scanner(System.in);
    int test;
     int kase,farmer,a,b,c,prem,i,j;
    while(true)
    {
    	test=sc.nextInt();
    	
    	for(i=1;i<=test;i++)
          {
              prem=0;
              farmer=sc.nextInt();
              {
              for(j=1;j<=farmer;j++)
                 	 {
                	 a=sc.nextInt();
                	 b=sc.nextInt();
               	     c=sc.nextInt();
                 
              	     prem=prem+a*c;
              	     }
                 System.out.println(prem);  
                }
          }
    }
    
    
    }
}
