#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr,int i,int n,int key){
	if(i==n){
		return -1;
	}
	if(arr[i]==key){
		return i;
	}
	return linearSearch(arr,i+1,n,key);
}

int main(){
	int arr[]={4,5,6,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=5;
	cout<<"Found at index "<<linearSearch(arr,0,n,key);
return 0;
}
	

