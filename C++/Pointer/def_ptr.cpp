#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int *p;
	p=&a;	
	cout<<"Address of P is "<<p<<endl; 
	cout<<"Value at P is "<<*p<<endl;
	int b=20;
	*p=b;
	cout<<"Address of P is "<<p<<endl; 
	cout<<"Value at P is "<<*p<<endl;
	/*
	Value is change bt Adress is as it is
	*/
	
}
