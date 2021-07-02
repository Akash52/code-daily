#include<bits/stdc++.h>
using namespace std;

int searchElement(int arr[],int n,int x){
	for(int i=0;i<n;i++)
	if(arr[i]==x)
		return i;
	return -1;
}


int main()
{
	int arr[]={1,2,3,4,5,5};
	int x=3;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<searchElement(arr,n,x);
	return 0;
}
