//Find the Number Occurring Odd Number of Times
#include<iostream>
using namespace std;
int OddOccurance(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	res ^=arr[i];
	return res;
}


int main()
{
	int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Odd occurance is "<<OddOccurance(arr,n);
	 
}
/*
Output : OddOccurance 5
*/
