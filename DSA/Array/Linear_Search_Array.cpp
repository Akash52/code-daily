#include<iostream>
using namespace std; 

int FindNum(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	if(arr[i]==x)
	return i;
	return -1;
}

int main()
{
	int arr[]={10,20,30,40};
	int x;
	cin>>x;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Array find at Index "<<FindNum(arr,n,x);
	return 0;
	
}
