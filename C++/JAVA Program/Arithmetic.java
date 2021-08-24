import java.util.Scanner;
class Demo5
{
public static void main(String a[])
{
	cal sc=new cal();
	
	Scanner sb=new Scanner(System.in);
	System.out.println("Enter the value A");
	sc.a=sb.nextInt();
	System.out.println("Enter the Value B");
	sc.b=sb.nextInt();
	sc.add();
	sc.sub();
	sc.mul();
	sc.div();
	sc.mod();
}
}
class cal 
{
int a,b,ans;

void add()
{
ans=a+b;

System.out.println("Ans is :"+ans);
}
void sub()
{
ans=a-b;

System.out.println("Sub is :"+ans);
}
void mul()
{
ans=a*b;

System.out.println("Mul is :"+ans);
}
void div()
{
ans=a/b;

System.out.println("Div is :"+ans);
}
void mod()
{
ans=a%b;

System.out.println("Mod is :"+ans);
}
}


