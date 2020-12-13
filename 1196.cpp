#include<iostream>
using namespace std;

void solve(int tc=0)
{
	int n;
	cin>>n;
	int f[n+1];
	f[0]=1;
	f[1]=0;
	for(int i=2;i<=n;i++){
		f[i]=2*f[i-2];
	}
	cout<<f[n]<<'/n';
}

int main()
{
	int tc=1;
	for(int t=0;t<tc;t++)
	solve(t);
	return 0;
}
