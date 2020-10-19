//Find the Number Occurring Odd Number of Times
/*
Examples:
Input : arr = {1, 2, 3, 2, 3, 1, 3}
Output : 3
*/
#include <bits/stdc++.h>  
using namespace std; 

int getOddOcu(int arr[],int arr_size)
{
	int res=0;
	for(int i=0;i<arr_size;i++)
	res=res^arr[i];
	return res;
 } n\


int main()
{
	int arr[]={2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	//function calling
	cout<<getOddOcu(arr,n);
	return 0;
}

