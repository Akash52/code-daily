#include<iostream>

using namespace std;

int main()
{
	//Initialization of an Array
	int arr[10]={1,2,3};
	
	//Size of
	cout<<sizeof(arr)<<endl;
	
	//How many element in Array
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;	
	
	//Input all the element from the user
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	
	//Print all first 10 element
	for(int i=0;i<10;i++){
		cout<<arr[i]<<",";
	}
}
