#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}

int main()
{
	int a=10,b=15;
	cout<<gcd(a,b)<<" ";
	return 0;
}
