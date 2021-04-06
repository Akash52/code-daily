// Sum of array using recursion

#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[],int n){
	if(n<=0)
		return 0;
	return (sumOfArray(arr,n-1)+arr[n-1]);
}

int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<sumOfArray(arr,n);
	return 0;
}
