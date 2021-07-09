#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int n){
	int res=arr[0];
	for(int i=1;i<n;i++)
	res=max(arr[i-1],res);
	return res;
}

int main()
{
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<getMax(arr,n);
	return 0;
}

