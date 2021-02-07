#include<iostream>

using namespace std;

int arrOdd(int arr[],int n)
{
	int res=0;
	
	for(int i=0;i<=n;i++)
	{
		res^=arr[i];
	}
	return res;
}

int main()
{
	int arr[]={5,5,7,9,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
	cout<<"Odd ocurrance is "<<arrOdd(arr,n);
}
