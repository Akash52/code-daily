import java.util.Scanner;
class max
{
	public static void main(String arg[])
		{
		int i,n;
		System.out.println("Enter the Size of Array");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int a[]=new int[n];
		System.out.println("Enter the array element");
		for(i=0;i<n;i++)
				{
					a[i]=sc.nextInt();	
				}
						for(i=0;i<n;i++)
						{
							System.out.println("array element is" +a[i]);
				
						}
					int smax=0;	
					int max=a[0];
					for(i=0;i<n;i++)
					{
						if(max<a[i])
						{
							max=a[i];
						}
				
					}
					System.out.println("First Maximum is" +max);
					for(i=0;i<n;i++)
					{
						if(a[i]>smax && a[i]<max)
					{
						smax=a[i];
					}
						
					}
					System.out.println("Second Maximum is" +smax);
					
						
		}
}		
	