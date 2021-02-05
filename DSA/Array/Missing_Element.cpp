//This method uses the technique of XOR to solve the problem
#include<iostream>
using namespace std;

int findMissing(int arr[],int n)
{
	int x1=0;
	int x2=1;
	for(int i=0;i<n;i++)
	x1=x1^arr[i];
	for(int i=1;i<n;i++)
	x2=x2^i;
	
	return(x1^x2);
}

int main()
{
	int arr[]={1,2,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Missing Number is "<<findMissing(arr,n);
	return 0;
}

/*
output :
Missing Number is 3
*/
