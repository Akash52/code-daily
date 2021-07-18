#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
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
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverseArray(arr,n);
	printArray(arr,n);
	return 0;

}
