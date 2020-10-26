import java.util.*;
class demo
	{
		public static void main(String ag[])
			{
				int a[][]=new int[2][2];
				int b[][]=new int[2][2];
				int c[][]=new int[2][2];
				Scanner sc=new Scanner(System.in);
				System.out.println("Enter matrix 1:");
				
				for(int i=0;i<2;i++)
				{	
					for(int j=0;j<2;j++)
					{
						a[i][j]=sc.nextInt();
					}					
				}	
				System.out.println("Enter matrix 2:");
						
				for(int i=0;i<2;i++)
				{	
					for(int j=0;j<2;j++)
					{
						b[i][j]=sc.nextInt();
					}					
				}
				for(int i=0;i<2;i++)
				{	
					for(int j=0;j<2;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}	
				}
				for(int i=0;i<2;i++)
				{	
					for(int j=0;j<2;j++)
					{
						System.out.print("\t"+c[i][j]);
					}
					System.out.println("");
				}	
						
			}
	}			
				 
						