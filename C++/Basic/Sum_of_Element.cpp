#include<bits/stdc++.h>
using namespace std;


int main()
{

	int arr[]={10,20,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=0;
	for(int i=0;i<n;i++)
	res+=arr[i];
	cout<<"Sum of element is "<<res<<" ";
	return 0;
}

