//Roll No: 10015406
//Merge Sort

import java.util.Scanner;

 class ArraySort
{
    public static void main(String[] args) 
    {
    	int[] array=new int[100];
    	int n,i,key,j;
    	Scanner sc=new Scanner(System.in);
    	
    	System.out.println("Enter Number of elements...");
    	n=sc.nextInt();
    	
    	System.out.println("Now Enter the elements.....");
    	for(i=1;i<=n;i++)
    	array[i]=sc.nextInt();
    	
    	
    for(j=2;j<=n;j++)
    {
    key=array[j];
    i=j-1;
    while(i>0&& array[i]>key)
       {
       array[i+1]=array[i];
       i--;
       }
    array[i+1]=key;
    }
    	System.out.println("The Sorting order is .....");
    	for(i=1;i<=n;i++)
    		System.out.print(array[i]+"  ");
    }
}
