#include<iostream>
using namespace std;

int FactorialRecurision(int n)
{
	if(n==0)
	return 1;
	for(int i=0;i<n;i++)
	return n*FactorialRecurision(n-1);
}

int FactorialIteration(int n)
{
	int res=1;
	for(int i=2;i<n;i++)
	res*=i;
	return res;
}

int main()
{
	int n=5;
	
	cout<<"Factorial Recurision "<<FactorialRecurision(n)<<endl;
	cout<<"Factorial Iteration "<<FactorialIteration(n);
	
}
