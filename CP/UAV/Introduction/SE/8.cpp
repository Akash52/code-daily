#include<bits/stdc++.h>

using namespace std;

typedef long long int i64;

int main()
{
	int tt,n;
	cin>>tt;
	while(tt--){
		cin>>n;
		
		i64 res=n*567;
		res/=9;
		res+=7492;
		res*=235;
		res/=47;
		res-=498;
		if(res<0) res *=-1;
		
		res%=100;
		res/=10;
		
		cout<<res<<endl;
		
		
	}
	return 0;
}
