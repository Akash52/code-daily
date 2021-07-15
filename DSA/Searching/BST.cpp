#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int x){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(high+low)/2;
		if(x==arr[mid])
		return mid;
		else if(x<arr[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	return -1;
}


int main()
{
	
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=5;
	BinarySearch(arr,n,x);
	return 0;
	
	
}
