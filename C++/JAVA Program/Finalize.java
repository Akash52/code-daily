	class demo
{
		static int count=0;
		demo()
			{
				count++;
				System.out.println(count+"Object creat");
			}	
				
			public static void main(String ag[])
				{
					demo ob=new demo();
					demo ob1=new demo();
					demo ob2=new demo();
					ob=ob2;
					System.gc();
				}	
				
				
				@Override
					public void finalize()
						
					{
						count--;
						System.out.println(count+"Avalble object");
					}
					
									
			
		
				

}		
		