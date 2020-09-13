#include<iostream>
using namespace std;
int main()
{
	int m,n,tt;
	cin>>tt;
	while(tt--)
	{
		cin>>m>>n;
		
		if(m<n){
			puts("<");
		}
		if(m>n){
			puts(">");
		}
		if(m==n){
			puts("=");
		}
	}
	return 0;
}
