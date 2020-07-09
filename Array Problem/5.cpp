//Program to multiply two matrices
#include <bits/stdc++.h> 
using namespace std;

//Funactin to check if has 2 elements
//Whose sum is equal to the given value

bool hasArray(int A[],int arr_size,int sum)
{
	int l,r;
	
	/*sort element using stlc++*/
	sort(A,A+arr_size);
	
	/*now look two candiadte in the sorted Array*/
	l=0;
	r=arr_size-1;
	while(l<r){
		if(A[l]+A[r]==sum)
		return 1;
		else if(A[l]+A[r]<sum)
		l++;
		else
		r--;
	
	}
	return 0;
	
	
}


int main()
{
	int A[]={1, 4, 45, 6, 10, -8};
	int n=16;
	int arr_size=sizeof(A)/sizeof(A[0]);
	if (hasArray(A,arr_size,n))
	cout<<"Array has two element with given sum";
	else
	cout<<"Array has two elemnt doesn't have sum";
	return 0;
}
