//Roll No-10015406
//Array 2D


import java.util.Scanner;

public class Array2D
{
    public static void main(String[] args) 
    {
    	int array[][]={
    	{ 0,1,2,3},
    	{4,5,6},
    	{7,8,9,10,11,12}
    		          };
    	int n,i,j,sum=0;
    	   
    	
    	System.out.println("The Input array is  .....");
    	System.out.println("_____________________");
    	//Printing the array
    	for(i=0;i<array.length;i++)
    	{
    		for(j=0;j<array[i].length;j++)
    		{
    			System.out.print(" "+array[i][j]);
    		
    		}
    			System.out.print("\n");
    	}
    //summation of the array
    
    	for(i=0;i<array.length;i++)
    	{
    		for(j=0;j<array[i].length;j++)
    		{
    		sum=sum+array[i][j];
    		
    		}
    		
    	}
    System.out.println("_____________________");	
    	System.out.println("\nSum is : "+sum);	
    System.out.println("_____________________");
    }
}
