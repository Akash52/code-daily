//Program to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three number "<<endl;
	cin>>a>>b>>c;
	
	if(a>=b && a>=c)
	cout<<"Largest number : "<<a;
	if(b>=a && b>=c)
	cout<<"Largest number : "<<b;
	if(c>=a && c>=b)
	cout<<"Largest number : "<<c;
	return 0;
}
