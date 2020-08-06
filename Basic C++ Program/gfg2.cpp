// C++ program to find maximum 
// in arr[] of size n 
//Time Complexity:O(n)

#include <bits/stdc++.h> 
using namespace std; 

int larg(int arr[],int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	if(arr[i]>max)
	{
		max=arr[i];
	}
	return max;
}

int main()
{
	int arr[]={1,2,3};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Array in largest num :"<<larg(arr,n);
	
	return 0;
}
