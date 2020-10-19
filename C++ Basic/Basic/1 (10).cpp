#include<iostream>
using namespace std;

void printNumber(int x)
{
	cout<<"i am printing intger : "<<x<<endl;
}
void printNumber(float x)
{
	cout<<"now i am printing float : "<<x<<endl;
}
int main()
{
	int a=50;
	float b=32.232;
	
	printNumber(a);
	printNumber(b);
}
