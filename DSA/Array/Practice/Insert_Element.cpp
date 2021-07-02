#include<bits/stdc++.h>

using namespace std;

int insert(int n, int arr[],int x, int pos){
	int idx=n-1;
	for(int i=n-1;i>=idx;i--){
		arr[i+1]=arr[i];
		arr[idx]=x;
	}
	return idx;
}

int main()
{
	int arr[]={10,20,30,40,50,};
	int x,pos;
	x=10;
	pos=2;
	int n=sizeof(arr)/sizeof(arr[0]);
	insert(n,arr,x,pos);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
}
	
