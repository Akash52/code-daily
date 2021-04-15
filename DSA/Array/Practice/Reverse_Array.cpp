#include<bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int n){
	int low=0;
	int high=n-1;
	
	while(low<high){
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}


int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverseArray(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
