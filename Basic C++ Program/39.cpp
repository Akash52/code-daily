//Pass By Value
#include<iostream>
using namespace std;
void passByValue(int x);
void passByReference(int *x);

int main()
{
	int a=56;
	int b=87;
	
	passByValue(a);
	passByReference(&b);
	
	cout<<"sky is :"<<a<<endl;
	cout<<"Sky is :"<<b<<endl;
	
	
}

	void passByValue(int x){
		x=99;
	}
	void passByReference(int *x){
		*x=66;
	}
