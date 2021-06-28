#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={10,20,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=0;
	res=accumulate(arr,arr+n,res);
	cout<<res<<" ";
	return 0;
	
}
