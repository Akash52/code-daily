import java.util.Scanner; 
class cal
{
	int a,b;
	void add()
	{
	
		System.out.println("add is"+(a+b));
	}
	void div()
	{
		System.out.println("div is"+(a/b));
	}
}	
class demo
{
	static public void main(String arg[]) 
	{
		Scanner c1=new Scanner(System.in);
		cal obj =new cal();
		obj.a=c1.nextInt();
		obj.b=c1.nextInt();
		
		
		
		c1.add();
		c1.div();
		
	}
}
