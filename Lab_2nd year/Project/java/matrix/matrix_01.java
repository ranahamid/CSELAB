import java.util.Scanner;

 class matrix 
{ 
    
    public static void main(String[] args) 
{
     int row,sum,i,j,column,k,n,m;
     int a[][]=new int[25][5];
     int s[]=new int[5];
     Scanner sc=new Scanner(System.in);
     
     System.out.println("How many Row");
     row=sc.nextInt();
    //scan for matrix
    	k=1;
     for(i=0;i<row;i++)
     {
         
     System.out.println("How many elements for row No: "+k);
     k++;	
     	 n=sc.nextInt();
     	 System.out.println("Now input the Numbers"); 
     	 for(m=0;m<n;m++)
     	 {
     	 a[i][m]=sc.nextInt();
     		
     	 }
     }
      System.out.println("\n=============================\n"); 
     //print matrix
     	 System.out.println("\nThe Input Matrix is\n"); 
  
     
     	for(i=0;i<row;i++)
    	{
    		for(j=0;j<a[i].length;j++)
    		{
    		System.out.print(a[i][j]+"  ");
    		}
    	System.out.println("");	
    	}
     System.out.println("\n=============================\n"); 
     	
     
     //Row wise summation
     	sum=0;
      System.out.println("Summation\n");
     	for(i=0;i<row;i++)
    	{
    		for(j=0;j<a[i].length;j++)
    		{
    		System.out.print(a[i][j]+"  ");
    		sum=sum+a[i][j];
    		}
    	System.out.println("||Sum : "+sum);
    	sum=0;	
    	}
     
     // System.out.println("\n=============================\n"); 
    
     //Column wise summation
     	sum=0;
    //  System.out.println("\nColumn wise summation\n");
     	for(i=0;i<row;i++)
    	{
    		for(j=0;j<a[i].length;j++)
    		{
    	//	System.out.print(a[i][j]+"  ");
    		sum=sum+a[j][i];
    		}
    	s[i]=sum;
    	sum=0;	
    //	System.out.println("");
    	}
    System.out.println("_____________________");	
     for(i=0;i<5;i++)
     {
     System.out.print(s[i]+"  ");	
     }    
 System.out.println("\n=============================\n");     
}
}
