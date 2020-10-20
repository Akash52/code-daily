//FActorial
#include<iostream>

using namespace std;

int Fact(int n)
{
	if(n==1)
	return 1;
	return n*Fact(n-1);
}

int main()
{
	int n=5;
	cout<<"Factorial of "<<n<<" is "<<Fact(n);
}

