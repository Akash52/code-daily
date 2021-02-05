#include<iostream>
using namespace std;
void ArrayRever(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
}
	void PrintArray(int arr[],int size)
	{
		for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	}

int main()
{
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	ArrayRever(arr, 0, n-1);
	cout << "Reversed array is" << endl;
    PrintArray(arr, n);
}
/*
output :
Reversed array is 4 3 2 1
*/
