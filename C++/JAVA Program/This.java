class demo
	{
		int a;
		int b;
		public static void main(String ag[])
		{
		demo d1=new demo();
		d1.Add(10,20);
		System.out.println(d1.a);
		System.out.println(d1.b);
		}
		void Add(int a,int b)
		{
			this.a=a;
			this.b=b;
			//int c=this.a+this.b;
			//System.out.println(c);
		}
	}
							