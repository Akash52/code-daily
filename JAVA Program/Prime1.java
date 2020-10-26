import java.util.Scanner;
class d
{
public static void main(String f[])
{

int a,count=0;
int i;
Scanner sb=new Scanner(System.in);
a=sb.nextInt();
for(i=1;i<100;i++)
{
for(i=1;i<a;i++)
{
if(a%i==0)
{
count++;
}
}
if(count==1)
}
	
{
System.out.println("Prime number");
}
else
{
System.out.println("Not prime");
}
}
}
