#include<iostream>

using namespace std;

int findMissingNum(int arr[],int n)
{
	int sum=(n+1)*(n+2)/2;
	for(int i=0;i<n;i++)
	sum -=arr[i];
	return sum;
}

int main()
{
	int arr[]={1,2,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int miss=findMissingNum(arr,n);
	cout<<miss;
	
}
