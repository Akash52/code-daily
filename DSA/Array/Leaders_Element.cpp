#include<bits/stdc++.h>
using namespace std;

void printLeader(int arr[],int n){
	for(int i=0;i<n;i++){
		int j;
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j])
			break;
		}
		if(j==n)
		cout<<arr[i]<<" ";
	}
}

int main()

{
	
	int arr[]={16, 17, 4, 3, 5, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printLeader(arr,n);
	
	return 0;
	
	
}
