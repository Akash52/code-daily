#include<iostream>
using namespace std;

int getMin(int arr[],int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	
		res=min(res,arr[i]);
		return res;
}
int getMax(int arr[],int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	
		res=max(res,arr[i]);
		return res;
}


int main()
{
	int arr[]={78,25,65,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Array minimum element : "<<getMin(arr,n)<<"\n";
	cout<<"Array maximum element : "<<getMax(arr,n);
	return 0;
}
