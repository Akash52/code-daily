import java.util.Scanner;
class Practical_6
{
	public static void main(String a[])
	{
		int no,count=0;
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter No:");
		no=sc.nextInt();
		int ono=no;
		String e[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
		String d1[]={"","Eleven","Twelve","Thirteen","Fourteen","Fifhteen","Sixteen","Seventeen","Eighteen","Nineteen"};
		String d2[]={"","Ten","Twenty","Thirty","Fourty","Fifhty","Sixty","Seventy","Eighty","Ninety"};
		
		String w="";
		if(no==0)
		{
			w=w+e[no];
		}
		else
		{
		while(no>0)
		{
				int temp=no%10;
				count++;
				
				switch(count)
				{
						case 1:
								w=w+e[temp];
								break;
						case 2:
								if((ono%100)>=11 && ((ono%100)<=19))
								{
										w=d1[ono%10];
								}
								else
								{
										if((ono%100)%10==0)
										{
											w=d2[(ono%100)/10];
										}
										else
										{
												w=d2[(ono%100)/10]+" "+w;
										}
										
								}
								break;
						case 3:
								if((ono/100)%10==0)
								{
									w=w;
								}
								else
								{
								w=e[temp]+" Hundread "+w;
								}
								break;
						case 4:
								
								if(((ono/1000)%10==0))
								{
									w="Thousand "+w;
								}
								else
								{	
									if(((ono/1000)%100)>=11 && ((ono/1000)%100)<=19)
									{
										w=d1[((ono/100)%10)]+" Thousand "+w;
									}
									else
									{
										w=e[temp]+" Thousand "+w;
									}
								}
								break;
						case 5:
								if(((ono/1000)%100)>=11 && ((ono/1000)%100)<=19)
								{
									w=w;
								}
								else
								{
								
								w=d2[temp]+" "+w;
								}
								break;
								
						case 6:
								
								w=e[temp]+" Lac "+w;
								break;
					
				}
				no=no/10;
				
		}
		
		}
		
		System.out.println(w);
			
	}
}