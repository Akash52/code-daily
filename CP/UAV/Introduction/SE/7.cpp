#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m,x,y;
	while(scanf("%d",&t)!=EOF && t){
		scanf("%d %d",&n,&m);
		while(t--){
			scanf("%d %d",&x,&y);
			if(n==x || m==y)
			printf("divisa\n");
			else if(x<n && y<m)
			printf("SO\n");
			else if(x>n && y>m)
			printf("NE\n");
			else if(x>n && y<m)
			printf("SE\n");
			else
			printf("NO\n");
		}
	}
	return 0;
}
