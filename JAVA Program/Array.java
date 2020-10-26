import java.util.Scanner;
class Array
{
	public static void main(String arg[])
	{
		int n,i;
		System.out.println("enter the size of array:-");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int a[]=new int[n];
		int max=a[0];
		int semax=a[0];
		System.out.println("enter the array:-");
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				semax=max;
				max=a[i];
			}
			else if(a[i]>semax)
			{
				semax=a[i];
			}				
			
		}
		System.out.println("Second largest number is:-"+semax);
	}
}
