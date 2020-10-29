//Program for array rotation
#include<iostream>

using namespace std;

void leftRotatebyone(int arr[],int n)
{
	int temp=arr[0];
	for(int i=0;i<n-1;i++)
	{
	
	arr[i]=arr[i+1];
	arr[i]=temp;
}
}
void leftRotate(int arr[],int d,int n)
{
	for(int i=0;i<d;i++)
	leftRotatebyone(arr,n);
}
void PrintRotateArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	leftRotate(arr,2,n);
	PrintRotateArray(arr,n);
	return 0;
}
