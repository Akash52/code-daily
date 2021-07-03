#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(arr[j]<arr[i])
	return 0;
	return 1;
}

int main()
{
	int arr[]={12,34,45,67};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<isSorted(arr,n)<<" ";
}
