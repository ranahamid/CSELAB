
import java.util.Scanner;
class CountingSort
{
	public static void main (String[] args)
 {
    int i,j,n,k=1000;
    int a[]=new int[100];
    int b[]=new int[100];
    int c[]=new int[1005];
    System.out.println("\nHow many numbers..");
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    System.out.println("Now eneter the number..");
    
    for(i=0;i<n;i++)
    a[i]=sc.nextInt();
    
    for(i=0;i<k;i++)
    c[i]=0;
    
    for(i=0;i<n;i++)
    c[a[i]]=c[a[i]]+1;
    
    for(i=1;i<k;i++)
    c[i]=c[i]+c[i-1];
    
    for(i=n-1;i>=0;i--)
    {
                b[c[a[i]]]=a[i];
                c[a[i]]=c[a[i]]-1;
    }                      
    System.out.println("Sorting sequence");
    for(i=1;i<=n;i++)
    System.out.print(b[i]+" ");
    System.out.println(" ");
   

}
}