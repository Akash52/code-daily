#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
	int res=arr[0];
	for(int i=0;i<n;i++){
		int curr=0;
		for(int j=i;j<n;j++){
			curr=curr+arr[i];
			res=max(res,curr);
		}
	}
	return res;
}


int main()

{
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<maxSum(arr,n);
	return 0;
}
