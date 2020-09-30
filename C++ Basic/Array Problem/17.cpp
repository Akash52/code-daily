#include <bits/stdc++.h>
using namespace std;

void revrseArr(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=arr[temp];
		start++;
		end--;
	}	
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	 cout<< endl;
}


int main()
{
	int arr[]={6,5,4,3,1};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	revrseArr(arr,0,n-1);
	printArray(arr,n);
	
	return 0;
	
}
