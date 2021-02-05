#include<bits/stdc++.h>

using namespace std;

int Delete(int arr[],int n,int x){
	int i;
	for(i=0;i<n;i++)
	if(arr[i]==x)
	break;
	
	if(i<n)
	{
		n=n-1;
		for(int j=i;j<n;j++)
		arr[j]=arr[j+1];
	}
	return n;
}

int main()
{
	int arr[]={12,3,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=3;
	n=Delete(arr,n,x);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
	
}
