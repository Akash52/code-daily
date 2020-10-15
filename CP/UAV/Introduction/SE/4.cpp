#include<bits/stdc++.h>

using namespace std; 

int main()
{
	int tt,m,n,sonars;
	cin>>tt;
	while(tt--)
	{
		scanf("%d %d",&m,&n);
		m-=2;n-=2;
		sonars=m/3+(m%3?1:0);
		sonars*=n/3+(n%3?1:0);
		printf("%d\n",sonars);
		
	}
	return 0;
	}
