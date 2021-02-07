#include<iostream>
using namespace std;

int main()
{
	int x=10,y=5;
	
	x=x^y; //x 15(1111)
	y=x^y;	// y 10(1010)
	x=x^y;	// x 5(0101)
	
	
	cout<<"After swapping X=" <<x<<",Y="<<y;
	return 0;

}
