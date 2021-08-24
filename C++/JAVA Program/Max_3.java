import java.util.Scanner;
class Pass
{
public static void main(String at[])
{

int a,b,c;
System.out.println("Enter the value A");
	Scanner sb=new Scanner(System.in);
a=sb.nextInt();
System.out.println("Enter the value B");
b=sb.nextInt();
System.out.println("Enter the value C");
c=sb.nextInt();
if(a>b)
{
System.out.println("A is Maximu"+a);
}
else if(b>c)
{
System.out.println("B is maximum"+b);

}
else
{
System.out.println("C is maximum"+c);
}
}

}