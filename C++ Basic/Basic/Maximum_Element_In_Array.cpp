#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={10,55,45,89,69};
	int n= sizeof(arr)/sizeof(arr[0]);
	int res=arr[0];
	for(int i=1;i<n;i++)
	res=max(res,arr[i]);
	cout<<"Maximum element is "<<res<<" ";
	return 0;
}
