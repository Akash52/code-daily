	class demo
{
		static int count=0;
		demo()
			{
				count++;
				System.out.printl(count+"Object creat");
			}	
				
			public static void main(String ag[])
				{
					gc ob=new gc();
					gc ob1=new gc();
					gc ob2=new gc();
					ob=ob2;
					System.gc();
				}	
					public void finalize()
						
					{
						count--;
						System.out.println(count+"Avalble object");
					}
					
									
			
		
				

}		
		