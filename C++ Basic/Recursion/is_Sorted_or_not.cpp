//If array is sorted or not
#include<bits/stdc++.h>.
using namespace std;

bool isSorted(int arr[],int n){
	if(n==0 || n==1){
		return true;
	}

if(arr[0]>arr[1]){
	return false;
}

bool isSmallSorted=isSorted(arr+1,n-1);
return isSmallSorted; 
}


int main()
{
	int arr[50];
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter element in array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	if (isSorted(arr,n)){
		cout<<"true : Array is Sorted ";
	}else{
		cout<<"false : Array is Not Sorted";
	}
	
	
}
