//Program to find largest element in an array
#include<iostream>
using namespace std;
int Max(int arr[],int n)
{
	 // Initialize maximum element 
	int max=arr[0];
	//travesy array elements
	//form second and compare
	//every element with current max
	for(int i=0;i<n;i++)
	if(arr[i]>max)
	max=arr[i];
	return max;
	
}
int main()
{
	int arr[]={4,5,8,9,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Largest Element in Array : "<<Max(arr,n);
	return 0;
}
