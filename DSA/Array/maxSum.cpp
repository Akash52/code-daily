#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
	int res=arr[0];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		res=max(res,sum);
		
	}
	return res;
}


int main()
{
	
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<maxSum(arr,n);
	return 0;
}
