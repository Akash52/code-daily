class Str

{
	public static void main(String ag[])
	{

		String s1="hello";
		String s2=new String("hello");
		System.out.println("using literals"+" " +s1);
		System.out.println("using new keyword"+" " +s2);
		
		System.out.println(s1.length());
		System.out.println(s1.equals(s2));
		System.out.println(s1.toUpperCase());
		System.out.println(s1.toLowerCase());
		System.out.println(s1.Concate(s2));
}
}
