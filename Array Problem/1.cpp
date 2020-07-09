//C Program to find sum of elements in a given array

#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=arr[i];
	return sum;
}

int main(){
	int arr[]={1,5,6,7};//
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Sum of given Array :"<<sum(arr,n);
	return 0; 
}
