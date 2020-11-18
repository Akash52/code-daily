//Given a array, check if it is sorted OR not !
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *a,int n)
{
	if(n==1)
	return true;
	if(a[0]<a[1] && isSorted(a+1,n-1)){
		return true;
	}
	return false;
}

int main()
{
	int a[]={1,2,3,4,5};
	int n=5;
	
	if(isSorted(a,n)){
		cout<<"Yes Sorted !";
	}
	else{
		cout<<"Not Sorted !";
	}
	return 0;
}
