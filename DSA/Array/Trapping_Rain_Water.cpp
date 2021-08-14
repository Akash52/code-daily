#include<bits/stdc++.h>
using namespace std;


int getWater(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n;i++){
		int lmax=arr[i];

		for(int j=0;j<i;j++)
		lmax=max(lmax,arr[i]);
		
		int rmax=arr[i];
		
		for(int j=i+1;j<n;j++)
		rmax=max(rmax,arr[j]);

		res=res+(min(lmax,rmax)-arr[i]);
	}
}

int main()
{
	int arr[]={3,0,1,2,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<getWater(arr,n);
	return 0;
}
