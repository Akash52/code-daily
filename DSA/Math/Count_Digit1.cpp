#include<iostream>
using namespace std;

int countDigit(long long n)
{
	if(n==0)
	return 0;
	return 1+countDigit(n/10);
}

int main()
{
long long n;
	cout<<"Enter any length number ";
	cin>>n;
	cout<<"Number of digits : "<<countDigit(n);
	
	return 0;
}
