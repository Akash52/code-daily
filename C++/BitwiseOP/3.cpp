//C++ Program to swap two numbers  without 
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x=10,y=5;
	
	x=x+y; //x now become 15
	y=x-y; //x now become 10
	x=x-y; //x now become 5
	
	cout<<"After Swapping x= "<<x<<", y="<<y;
	return 0;
 } 
