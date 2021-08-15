#include<bits/stdc++.h>
using namespace std;

int fun1(int a,int b)
{
	if(a>b)
	return a;
	return b;
}

int main()
{
	cout<<"maximum is "<<fun1(30,20);
	return 0;
}
