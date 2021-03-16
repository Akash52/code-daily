#include<bits/stdc++.h>

using namespace std;

void leftRotateArray(int arr[],int n)
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
	arr[i-1]=arr[i];
	arr[n-1]=temp;
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

int main()
{
	
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);	
	leftRotateArray(arr,n);
	printArray(arr,n);
	return 0;
	
}
