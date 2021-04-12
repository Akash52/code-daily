//Example: Compute quotient and remainder
#include<iostream>;
using namespace std;

int main()
{
	int divisor,divident,quotient,remainder;
	cout<<"Enter divident ";
	cin>>divident;
	
	cout<<"Enter divisor ";
	cin>>divisor;
	quotient=divident/divisor;
	remainder=divident%divisor;
	cout<<"Quotient= :"<<quotient<<endl;
	cout<<"Remainder= :"<<remainder;
	return 0;
	
	
	
	
}
