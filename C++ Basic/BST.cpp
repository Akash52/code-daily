#include<iostream>

using namespace std;

int BinarySearch(int A[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(x==A[mid]) return mid;
		else if(x<A[mid]) high=mid-1;
		else low=mid+1;
	}
	return -1;
}
int main()

{
	int A[]={2,4,5,7,13,14,15,23};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<"Enter Number: ";
	int x;
	cin>>x;
	int index=BinarySearch(A,n,x);
	if(index !=-1)
	cout<<"Number is "<<x<<" at index "<<index;
	else
	cout<<"We not find "<<x;
	return 0;
	
}
