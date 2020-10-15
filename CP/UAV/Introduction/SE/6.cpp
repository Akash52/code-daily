#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tt,n,max,min,tmp;
	cin>>tt;
	while(tt--)
	{
		cin>>n;
		max=INT_MIN;
		min=INT_MAX;
		while(n--)
		{
			cin>>tmp;
			if(tmp>max) max=tmp;
			if(tmp<min) min=tmp;
		}
		printf("%d\n",(max-min)*2);
	}
	return 0;
}
