#include<iostream>
using namespace std;

int stock(int arr[],int n)
{
		int profit=0;
		for(int i=1;i<n;i++)
		if(arr[i]>arr[i-1])
		profit+=(arr[i]-arr[i-1]);
		return profit;
}

int main()
{
	int arr[]={1,5,3,8,12,13};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<stock(arr,n);
	return 0;
}
