#include<iostream>


using namespace std;

int main()
{
	char str[]="abcde";  //Create Temporary memory
	char *ptr="abcde";	// Point direct memory
	
	cout<<str<<endl;
	cout<<ptr<<endl;
	
	
	int arr[]={1,2,3};
	char b[]="abcd";
	cout<<arr<<endl;
	cout<<b<<endl;  // Return hall string
	
	char *c =&b[0];
	cout<<c<<endl;
	
	char c1='a';
	char *pc=&c1;
	
	cout<<c1<<endl;
	cout<<pc<<endl;
}
