#include<iostream>
using namespace std;

void SlectionSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
	
	int min=i;
	for(int j=0;j<n;j++)
	{

	if(arr[j]<arr[min])
	{
		min=j;
	}
		}
	if(min !=i)
	{
		int temp=arr[i];
		arr[min]=arr[i];
		arr[i]=temp;
	}
}
}
int main()
{
	int arr[]={1,4,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	SlectionSort(arr,n);
	cout<<n;
	
}
