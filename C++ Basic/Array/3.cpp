#include<iostream>
using namespace std;

int getOddOcur(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	res=res^arr[i];
	return res;
}

int main(){
	int arr[]={2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<getOddOcur(arr,n);
	return 0;
}

