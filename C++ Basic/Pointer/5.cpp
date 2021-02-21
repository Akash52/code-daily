//Pointer with Array
#include<iostream>
using namespace std;

int main()
{
	int a[10];
	cout<<a<<endl; 
	cout<<&a<<endl;	// a &a are same  
	cout<<&a[0]<<endl;  //a[0] and a is same address
	
	a[0]=5;
	a[1]=10;
	cout<<*a<<endl; //a[0] print value
	cout<<*(a+1)<<endl; //a[1] return 10
	
}
