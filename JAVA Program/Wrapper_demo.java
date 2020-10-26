class Wrapper_demo
	{
		public static void main(String ag[])
			{
				int i;
				float a;
				
				i=Integer.parseInt(ag[0]);
				a=Float.parseFloat(ag[1]);
				System.out.println(i);
				System.out.println(a);
				System.out.println(a+i);
				char c=(char)(int)(a+i);
				System.out.println(c);
				c=Character.toUpperCase(c);
				System.out.println(c);
				String s="Hello";
				s=s+c;
				System.out.println(s);

				long l1=(int)c;
				System.out.println(l1);
				Long d1=l1;
				double d2=l1;
				d2=(double)(long)l1;
				System.out.println(d2); 
				boolean b1=false;
				Boolean b2=b1;
				System.out.println(b2);
					
				
				

					
				

			}
	}		