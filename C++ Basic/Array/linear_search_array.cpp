#include<iostream>
using namespace std;

int main()
{
	int n,key,i;
	cin>>n;
	int arr[100];
			
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element you want find : ";
	cin>>key;
	
	for(int i=0;i<n-1;i++){
		if(arr[i]==key){
			cout<<key<<" found at "<<i<<" index";
			break;
		}
	}
	if(i==n){
			cout<<key<<" is not present "<<endl;
			}
	
	
}


