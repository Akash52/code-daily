#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int n)
{
	int res=0;
	int lmax[0]=arr[0];
	for(int i=1;i<n;i++)
	lmax[i]=max(arr[i],lmax[i-1]);
	cout<<lmax<<" ";
}

int main()
{
	int arr[]={1,2,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<getMax(arr,n);
}
