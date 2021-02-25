#include<iostream>
using namespace std;

void print(int *p){
	cout<<*p<<endl;
}

int main()
{
	int i=10;
	int *p=&i;
	print(p);
}
