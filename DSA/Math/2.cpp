//Using single line Factorial
#include<bits/stdc++.h>
using namespace std;

int Fact(int n)
{
	return (n==1 || n==0)? 1 : n*Fact(n-1);
}

int main()
{
	int n=5;
	cout<<"Fact "<<n<<" is "<<Fact(n);
	
}
