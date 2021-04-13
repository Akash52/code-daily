#include<bits/stdc++.h>
using namespace std;

int deleteElement(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	if(arr[i]==x)
	break;
	
	if(i<n){
		n=n-1;
		for(int j=i;j<n;j++)
		arr[j]=arr[j+1];
	}
	return n;
}


int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
  
    // Delete x from arr[]
    n = deleteElement(arr, n, x);
  
    cout << "Modified array is \n";
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
  
    return 0;
}
