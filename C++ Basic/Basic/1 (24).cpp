#include<iostream>
using namespace std;

int main()
{
	int a[]={20,23,45,78,89};
	int sum=0;
	
	for(int x=0;x<5;x++){
		sum+=a[x];
		cout<<sum<<endl;
	}
}
