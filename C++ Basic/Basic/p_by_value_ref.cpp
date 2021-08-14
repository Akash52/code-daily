//Pass by value & Pass by reference

#include<iostream>
using namespace std;
void PassbyValue(int x);
void PassbyReference(int *x);
int main()
{
	int sandy=13;
	int bandy=13;
	PassbyValue(sandy);
	PassbyReference(&bandy);
	cout<<"Bandy"<<sandy<<endl;
	cout<<"Sandy"<<bandy<<endl;
}
void PassbyValue(int x)
{
	 x=66;
}
void PassbyReference(int *x)
{
	*x=66;
}

