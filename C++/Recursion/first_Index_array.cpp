#include<bits/stdc++.h>
using namespace std;

int fisrtIndex(int arr[],int n,int x,int currIndex)
{
	if(n==currIndex){
		return -1;
	}
	if(arr[currIndex]==x)
	{
		return currIndex;
	}
	fisrtIndex(arr,n,x,currIndex+1);
}

int main()
{
	int arr[]={1,2,4,5,5,6};
	int x=5;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<fisrtIndex(arr,n,x,0);
	return 0;
}
