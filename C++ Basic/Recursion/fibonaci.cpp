#include<bits/stdc++.h>

using namespace std;


int fibonaci(int n)
{
	if(n==0){
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	int smallOutput1=fibonaci(n-1);
	int smallOutput2=fibonaci(n-2);
	return smallOutput1+smallOutput2;
}


int main()

{
	int n;
	cin>>n;
	int output=fibonaci(n);
	cout<<output<<endl;
	
}
