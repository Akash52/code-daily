#include<iostream>
using namespace std;

int FindElem(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
		
	}
	return n;
}

int main()
{
	int arr[]={1,20,12,13,2};
	int key=20;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Number find at position "<<FindElem(arr,n,key);
	return 0;
	
	
}
