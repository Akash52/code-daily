#include<iostream>

using namespace std;

int main()
{
	int a=1025;
	int *p;
	p=&a;
	
	cout<<"\nSize of integer "<<sizeof(int)<<endl;
	cout<<"Address = "<<p<<" Value = "<<*p;
}
