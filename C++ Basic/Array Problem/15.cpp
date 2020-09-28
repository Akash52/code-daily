//Find the Missing Number
#include<iostream>
using namespace std;

int getMissedNo(int a[],int n)
{
	int total=(n+1)*(n+2)/2;
	
	for(int i=0;i<n;i++)
	total-=a[i];
	return total;
}


int main()
{
	int arr[]={1,2,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int miss=getMissedNo(arr,n);
	cout<<"Missed number is "<<miss;
	return 0;
}

/*
Complexity Analysis: 
Time Complexity: O(n). 
Only one traversal of the array is needed.
Space Complexity: O(1). 
No extra space is needed*/
