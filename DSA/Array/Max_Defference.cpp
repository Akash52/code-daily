#include<bits/stdc++.h>
using namespace std;

int maxDeff(int arr[],int n){
	int res=arr[1]-arr[0];
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	res=max(res,arr[j]-arr[i]);
	return res;
}

int main()
{
	int arr[]={1,2,7,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);

	cout<<maxDeff(arr,n);

}
