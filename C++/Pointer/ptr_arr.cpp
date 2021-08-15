#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[10];
	cout<<arr<<endl;
	cout<<&arr[0]<<endl;
	arr[1]=10;
	arr[0]=5;
	cout<<*arr<<endl;
	cout<<*(arr+1)<<endl;
	
	int *p=&arr[0];
	cout<<arr<<endl;
	cout<<p<<endl;
	
	cout<<&arr<<endl;
	cout<<&p<<endl;
	
	cout<<sizeof(arr)<<endl;
	cout<<sizeof(p)<<endl;
	
	p=p+1;
	arr=arr+1; //Not allow
	
	cout<<p<<endl;
	cout<<arr<<endl;
	
	
}
