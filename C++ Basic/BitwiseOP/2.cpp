//Bitwise Operators in C/C++
#include <bits/stdc++.h> 
using namespace std;
int findOdd(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	res=res^arr[i];
	return res;
}

int main()
{
	int arr[]={12,12,14,90,15,15,14};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<findOdd(arr,n);
	return 0;
}
