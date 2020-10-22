#include<iostream>
using namespace std;
int SumArray(int arr[],int n)
{
	int sum=0;
	
	for(int i=0;i<n;i++)
	sum +=arr[i];
	
	return sum;
}

int main()
{
	int arr[]={10,20,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Sum of Array element is "<<SumArray(arr,n);
}
