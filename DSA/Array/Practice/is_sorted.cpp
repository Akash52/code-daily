#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		if(arr[j]<arr[i])
		return false;
		return true;
}

int main()
{
	int arr[]={10,20,30,40};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(isSorted(arr,n)){
		cout<<"Array is Sorted";
	}else
	{
		cout<<"Array is Not Sorted";
	}
	return 0;
}
