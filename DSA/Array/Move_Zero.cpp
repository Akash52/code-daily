#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	if(arr[i]!=0)
	swap(arr[count++],arr[i]);
			
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

int main()
{
	int arr[]={12,10,0,0,12,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Original Array : ";
	printArray(arr,n);
	moveZero(arr,n);
	cout<<"\nModified Array : ";
	printArray(arr,n);
	
	return 0;
	
	
}
