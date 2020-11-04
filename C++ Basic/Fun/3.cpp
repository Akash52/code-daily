#include<iostream>
using namespace std;

int main()
{
	
	//Primitive Datatypes
	int x=5000;
	float y=10.124;
	bool rainy=true;
	double pi=3.1411;
	char ch='A';
	//How much memory each s going to occupy !
	cout<<"Int "<<sizeof(x)<<endl;	//4 BYTE
	cout<<"Float "<<sizeof(y)<<endl;	//4 BYTE
	cout<<"Bool "<<sizeof(rainy)<<endl;	//1 BYTE
	cout<<"Double "<<sizeof(pi)<<endl;	//8 BYTE
	cout<<"Char "<<sizeof(ch)<<endl;	//1 BYTE
}
