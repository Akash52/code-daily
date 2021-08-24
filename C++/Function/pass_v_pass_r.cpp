#include<iostream>
using namespace std;
void passBy(int x);
void ref(int *x);
int main()
{
	int a=13;
	int b=13;
	passBy(a);
	ref(&b);
	cout<<a;
	cout<<b;
}
void passBy(int x)
{
	x=99;
}

void ref(int *x)
{
	*x=66;
}
