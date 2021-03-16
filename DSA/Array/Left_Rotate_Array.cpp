//Left Rotate Array By ONE
#include<bits/stdc++.h>

using namespace std;

void leftRotateArray(int arr[],int n)
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
	arr[i-1]=arr[i];  // First We Copy 2nd element in arr(i-1)
	arr[n-1]=temp;	// then we assign our first element to last element			
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
