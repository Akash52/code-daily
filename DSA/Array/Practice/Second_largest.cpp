#include<bits/stdc++.h>

using namespace std;

int secondLargest(int arr[],int n)
{
	int res=-1;
	int largest=0;
	
	for(int i=1;i<n;i++){
		if(arr[i]>arr[largest])
		{
		res=largest;
		largest=i;
		}
		else if(arr[i]!=arr[largest]){
		if(res==-1 || arr[i]>arr[res])
						}
	}

	return res;
}

int main()
{
	int arr[]={10,23,34,46,56};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<secondLargest(arr,n);
}
