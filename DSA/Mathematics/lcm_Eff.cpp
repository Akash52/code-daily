#include<iostream>
using  namespace std;

int gcd(int a,int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}


int main()
{
	int a=8,b=6;
	cout<<lcm(a,b)<<" ";
	return 0;
}
