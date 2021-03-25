#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=1025;
	int *p;
	p=&a;
	
	cout<<sizeof(int)<<endl;
	cout<<p<<" "<<*p<<endl;
	cout<<p+1<<" "<<*(p+1)<<endl;
	
	
	char *p0;
	p0=(char*)p;
	cout<<sizeof(char)<<endl;
	cout<<p0<<" "<<*p0<<endl;
	
}
