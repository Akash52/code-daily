import java.util.Scanner;
class Demo2
{
public static void main(String a[])
{
	cal sc=new cal();
	
	Scanner sb=new Scanner(System.in);
	sc.a=sb.nextInt();
	sc.b=sb.nextInt();
	sc.add();
	
}
class cal 
{
int a,b,ans;
{
void add()
{
ans=a+b;

System.out.println("Ans is :"+ans);
}
}
}
