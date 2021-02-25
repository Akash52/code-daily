#include<iostream>
using namespace std;

void print(int *p){
	cout<<*p<<endl;
}

void incrementPointer(int *p){
	p=p+1;
}

int main()
{
	int i=10;
	int *p=&i;
	print(p);
	cout<<p<<endl;
	incrementPointer(p);
	cout<<p<<endl;
}
