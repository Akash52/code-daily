#include<bits/stdc++.h>
using namespace std;

 bool containsDuplicate(int arr[],int n) {
 		
	
 	
        for (int i=1; i<n; ++i) {
                if (arr[i] == arr[i-1]) {
                    return true;
                }
        }
        return false;
    }

int main(){
	
	int arr[100]={0};
	int n=sizeof(arr)/sizeof(arr[0]);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(containsDuplicate(arr,n)){
		cout<<"Bad";
	}
	else{
		cout<<"Good";
		}
}





