#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n<=1)
	return false;
	
	for(int i=2;i<n;i++)
	if(n%i==0)
	return false;
	
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cout=0;
		cin>>n;
		isPrime(n)?<<cout<<"Yes":
					<<cout<<"false";
		
	}
	return 0;
}
