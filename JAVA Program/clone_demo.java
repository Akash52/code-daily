class Clone_demo
	{
		int er_no;
		String s_name;
		String c_name;
		Clone_demo(){}
	

		Clone_demo(Clone_demo  temp)
		{
			this.er_no=temp.er_no;
			this.s_name=temp.s_name;
			this.c_name=temp.c_name;
			
		}	
		public static void main(String ag[])
			{
				Clone_demo c1=new Clone_demo();
				c1.er_no=1;
				c1.s_name="abc";
				c1.c_name="LEC";
				
				Clone_demo c2=new Clone_demo(c1);
				System.out.println(c2.er_no);	
				System.out.println(c2.s_name);
				System.out.println(c2.c_name);
				
				Clone_demo c3=new Clone_demo();
				c3.er_no=c2.er_no;
				c3.s_name=c2.s_name;
				c3.c_name=c2.c_name;

				System.out.println(c3.er_no);	
				System.out.println(c3.s_name);
				System.out.println(c3.c_name);

				
			}
		}		
