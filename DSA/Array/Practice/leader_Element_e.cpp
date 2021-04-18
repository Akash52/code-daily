#include<bits/stdc++.h>
using namespace std;

void pritnLeader(int arr[],int n){
	int c_l=arr[n-1];
	cout<<c_l<<" ";
	for(int i=n-2;i>=0;i--){
		
		if(c_l<arr[i])
		{
			c_l=arr[i];
			cout<<c_l<<" ";
		}
	}
}

int main(){
	
	int arr[]={7,10,4,10,6,5,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	pritnLeader(arr,n);
	
	return 0;
}
