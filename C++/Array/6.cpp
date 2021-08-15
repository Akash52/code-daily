//Majority Element
//Examples :
//Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
//Output : 4



#include <bits/stdc++.h>  
using namespace std; 

void findMaj(int arr[],int n)
{
	int maxCount=0;
	int index=-1;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count>maxCount)
		{
			maxCount=count;
			index=i;
		}
		
	}
	if(maxCount>n/2)
	cout<<arr[index]<<endl;
	else
	cout<<"No major Element"<<endl;
}
 

int main()
{
	int arr[]={3, 3, 4, 2, 4, 4, 2, 4, 4};
	int n=sizeof(arr)/sizeof(arr[0]);
	//Function calling
	findMaj(arr,n);
	
	return 0;
}
