#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,sum=0;
		cin>>a>>b;
		while(a>=1)
		{
			b=(b*(b+1))/2;
			a--;
		}
		cout<<b<<endl;
		
	}
	return 0;
}
