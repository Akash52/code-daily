#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
	for(int i=1;i<n;i++)
	if(arr[i]<arr[i-1])
	return false;
	return true;
}

int main()
{
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(isSorted(arr,n)){
		cout<<"Array is sorted";
	}else{
		cout<<"Array is not Sorted";
	}
	return 0;
}
