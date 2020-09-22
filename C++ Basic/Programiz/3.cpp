#include<iostream>
using namespace std;

int main()
{
	int divisor,divident,quotient,remainder;
	
	cout<<"Enter divident : ";
	cin>>divident;
	cout<<"Enter divsior: ";
	cin>>divisor;
	
	quotient=divident/divisor;
	remainder=divident%divisor;
	cout<<"qutient ="<<quotient<<endl;
	cout<<"Remainder ="<<remainder;
	
	return 0;
	
	
}
