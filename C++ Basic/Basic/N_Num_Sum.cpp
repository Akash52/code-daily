#include<iostream>
using namespace std;
int funSum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

int main()
{
	int arr[]={1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<funSum(arr,n);

	
}
