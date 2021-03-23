#include<bits/stdc++.h>
using namespace std;

void fillPrefixSum(int arr[],int n,int PrefixSum[]){
	PrefixSum[0]=arr[0];
	for(int i=1;i<n;i++)
	PrefixSum[i]=PrefixSum[i-1]+arr[i];
		
}

int main()

{
	int arr[]={10,23,14,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int PrefixSum[n];
	
	fillPrefixSum(arr,n,PrefixSum);
	for(int i=0;i<n;i++){
		cout<<PrefixSum[i]<<" ,";
	}
	
	
}


