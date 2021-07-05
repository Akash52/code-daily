#include<bits/stdc++.h>
using namespace std;

int maximumConOnce(bool arr[],int n){
	int count=0;
	int res=0;
	for(int i=0;i<n;i++){	
	if(arr[i]==0)
	count=0;
	else
	count++;
	res=max(res,count);
	}
	return res;
}


int main()
{
	bool arr[]={1,1,1,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<maximumConOnce(arr,n);
	return 0;
}
