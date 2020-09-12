import java.util.Scanner;
import java.lang.*;

class Main{
	public static void main(String[] args)
		{
			double n;
			Scanner scan=new Scanner(System.in);
			double d=scan.nextDouble();
			double c=Math.sqrt(d);
			if(c*c==d)
			{
				System.out.println("TRUE");
			}
			else
			{
				System.out.println("FALSE");

			}	
			
			//System.out.println(String.format("%7.3f",d));
		}
}