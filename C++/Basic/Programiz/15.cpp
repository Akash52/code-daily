#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int n,rvrsnum=0,rem;
	
	cout<<"Enter number :";
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		rvrsnum=rvrsnum*10+rem;
		n/=10;
	}
	cout<<"Reversed Number "<<rvrsnum;
	return 0;
	

	
}
