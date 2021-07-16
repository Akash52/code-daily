#include<iostream>
using namespace std;

int binarySort(int arr[],int n){
	int pivot=1;
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<pivot)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
}

int main()
{
	int arr[]={1,0,0,1,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	binarySort(arr,n);
	
	for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
