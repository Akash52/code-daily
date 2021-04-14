#include<bits/stdc++.h>

using namespace std;

int findMax(int arr[],int n)
{
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	return max;
}

int main()

{
	int arr[]={10,34,45,67,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Max is "<<findMax(arr,n);
	return 0;
}
