#include<iostream>
using namespace std;

int main()
{
	int t,a,b,c,asum(0),bsum(0),csum(0);
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		asum +=a;
		bsum=+b;
		csum=+c;
}
		if(asum==0 && bsum==0 && csum==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		return 0;
	}

