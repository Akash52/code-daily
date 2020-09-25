#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
	int t,a,d;
	char ch;
	while(cin>>t)
	{
		a=0;
		d=0;
		for(int i=1;i<=t;i++)
		{
			cin>>ch;
			if(ch=='A')
			a=a+1;
			else
			d=d+1;
			
		}
		if(a>d)
		cout<<"Anton"<<endl;
		else if(d>a)
		cout<<"Danik"<<endl;
		else
		cout<<"Friendship"<<endl;
	}
	return 0;
}
