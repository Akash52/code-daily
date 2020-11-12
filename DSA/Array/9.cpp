//Largest Sum Contiguous Subarray

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[1000];
	int maximumSum=0;
	int currentSum=0;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentSum=0;
			
				for(int k=i;k<=j;k++){
				
				currentSum+=a[k];
			}
			if(currentSum>maximumSum){
				maximumSum=currentSum;
			}
		}
		
	}
	cout<<"MaximumSum is "<<maximumSum<<endl;
	return 0;
}
