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
	
	int *p =&a[0];
	
	cout<<p<<endl; //Address
	cout<<a<<endl;	//Address
	
	cout<<"Pointer P Address Changed : "<<&p<<endl;	// Adress chanaged
	cout<<&a<<endl;	// Address Same
	
	cout<<sizeof(p)<<endl;
	cout<<sizeof(a)<<endl;
	
	p=p+1;
	//a=a+1; <- we can not assign like these
	p=a+1; // these one is valid
	cout<<p<<endl;
	cout<<p<<endl;
	
	
	
	
	
	
	
	
}
