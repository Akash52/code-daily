#include<iostream>

using namespace std;

int main()
{
	long long n;
	int count=0;
	cin>>n;
	while(n!=0)
	{
		
		if(n%4==0 || n/7==0)
		{
			count++;
		}
		n/=10;
		
		
	}
	if(count==4 || count==7)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
