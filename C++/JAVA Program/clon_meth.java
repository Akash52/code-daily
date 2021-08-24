import java.util.*;
class Clone_method implements Cloneable
{
	int er_no;
	String name;
	public static void main(String ag[])
		{
			try{
			Clone_method c1=new Clone_method();
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter Er_no");
			c1.er_no=sc.nextInt();
			System.out.println("Enter name");
			c1.name=sc.next();
			
			Clone_method c2=(Clone_method)c1.clone();
			System.out.println(c2.er_no);
			System.out.println(c2.name);
			}
				catch(Exception e){

						}
					
		}
		public Object clone() throws CloneNotSupportedException
			{
				return super.clone();
			}
			
			
			
			


}

			