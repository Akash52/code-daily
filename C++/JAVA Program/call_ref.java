import java.util.*;
class call_ref
{
	int a; //Member variable
	static void obb(call_ref temp)
		{
		System.out.println(temp.a);
		}
	public static void main(String ag[])
		{
			{
			
			call_ref d1=new call_ref();
			Scanner s1=new Scanner(System.in);
			System.out.println("Enter Value of A");
			d1.a=s1.nextInt();
			obb(d1);
				
			}		
		}
		
		
}

			
	