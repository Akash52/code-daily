//Recursive program to linearly search an element in a given array

#include<bits/stdc++.h> 
using namespace std;
int recSearch(int arr[],int l,int r,int x)
{
	if(r<l)
	return -1;
	if(arr[l]==x)
	return 1;
	if(arr[r]==x)
	return r;
	return recSearch(arr,l+1,r-1,x);
}



int main()
{
	int arr[]={1,2,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=6;
	int index=recSearch(arr,0,n-1,x);
	if(index!=-1)
	cout<<"Element"<<x
	<<"is present at index"<<index;
	else
	cout<<"Element Not Present"<<x;
	return 0;
	
}
