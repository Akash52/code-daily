import java.util.Scanner;
class Demo
{
	public static void main(String ar[])
	{
		int a,i,j,pc=0,count=0;
		
		Scanner ab=new Scanner(System.in);
		System.out.println("Enter value 1 to 100"); 
		a=ab.nextInt();
		for(j=1;j<100;j++)
			{
				count=0;
					if(pc<a)
					{
						if(j==1)
						{
						pc++;
						System.out.println("Prime number is"+j);
						}
					
						else
						{			
							for(i=1;i<j;i++)
							{
	
								if(j%i==0)
								{
									count++;
								}
							}	
							if(count==1)
							{
								pc++;
								System.out.println("Prime number"+j);
							}
	
						}
			
			}
		}			
	}
}
		
	