#include<bits/stdc++.h> 
using namespace std;

int getMessingNo(int arr[],int n)
{
	 // For xor of all the elements in array 
	int x1=arr[0];
	// For xor of all the elements from 1 to n+1 
	int x2=1;
	
	for(int i=1;i<n;i++)
	x1=x1^arr[i];
	for(int i=2;i<n+1;i++)
	
	return(x1^x2);
}


int main()
{
	int arr[]={1,2,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int miss=getMessingNo(arr,n);
	cout<<miss;		
	
}

/*
Algorithm:
-------------
1.Create two variables a = 0 and b = 0
2.Run a loop from 1 to n with i as counter.
3.For every index update a as a = a ^ i
4.Now traverse the array from start to end.
5.For every index update b as b = b ^ array[i]
6.Print the missing number as a ^ b.
*/

/*
Complexity Analysis:
Time Complexity: O(n).
Only one traversal of array is needed.
Space Complexity: O(1).
No extra space is needed.*/


