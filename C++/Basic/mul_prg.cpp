#include<bits/stdc++.h>
using namespace std;


int main()
{
	int x,y,mul=0;
	cin>>x>>y;
	while(y!=0){
		mul=mul+x;
		y--;
	}
	cout<<mul;
	
}
