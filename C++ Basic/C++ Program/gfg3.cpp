// CPP program to find minimum (or maximum) element 
// in an array. 
//Time Complexity:O(n)

#include <bits/stdc++.h> 
using namespace std; 
int getMin(int arr[],int n)
{
	int res=arr[0];
	for(int i=1;i<n;i++)
	res=min(res,arr[i]);
	return res;
}
int getMax(int arr[],int n)
{
	int res=arr[0];
	for(int i=1;i<i;i++)
	res=max(res,arr[i]);
	return res;
}


int main()
{
	int arr[]={78,98,21,1,65};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Array in minimum element :"<<getMin(arr,n)<< "\n"; 
	cout<<"Array in maximum element :"<<getMax(arr,n);
	
	return 0;
}
