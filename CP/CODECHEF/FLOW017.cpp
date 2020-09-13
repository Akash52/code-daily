#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a>=b && b>=c || b>=a && b<=c )
		cout<<b<<endl;
		else if(a>=c && c>=b || a<=c && b>=c)
		cout<<c<<endl;
		else
		cout<<b<<endl;
	}
}
