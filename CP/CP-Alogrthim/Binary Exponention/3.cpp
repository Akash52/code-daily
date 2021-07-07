#include<bits/stdc++.h>
using namespace std;

int power(long long a,long long b,long m)
{
	a%=m;
	int result=1;
	while(b>0){  //Return 1
		if(b%2==1) 
		result=(result*a)%m;  //Odd numebr
		a=(a*a)%m; 
		b/=2; //Even Number
	}
	return result;
}

int main()
{
	long long a,b,m;
	int t;
	cin>>t;
	while(t--)
	{
	cin>>a>>b>>m;
	cout<<power(a,b,m)<<endl;
	}
	int c;
    cin >> c;
	return 0;
}
