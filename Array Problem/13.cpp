//Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed

#include<bits/stdc++.h> 
using namespace std;

int maxSum(int arr[],int n)
{
	int arrSum=0;
	int currVal=0;
	for(int i=0;i<n;i++)
	{
		arrSum=arrSum+arr[i];
		currVal=currVal+(i*arr[i]);
	}
	int maxVal=currVal;
	for(int j=1;j<n;j++)
	{
		currVal=currVal+arrSum-n*arr[n-j];
		if(currVal>maxVal)
		maxVal=currVal;
	}
	return maxVal;
}

int main()
{
	int arr[]={10,1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<maxSum(arr,n);
	return 0;
}








