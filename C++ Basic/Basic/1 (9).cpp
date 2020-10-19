//scope resolution operator
#include<iostream>
using namespace std;

int tuna=96;

int main()
{
	int tuna=20;
	cout<<::tuna<<endl;
}
void bucky()
{
	//cout<<tuna<<endl;
}
