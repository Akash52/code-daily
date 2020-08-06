#include<iostream>
using namespace std;

int main()

{
	int x=1;
	int num;
	int total=0;
	
	while(x<=5)
	{
		cin>>num;
		total=total+num;
		x++;
	}
	cout<<"Your total is"<<total;

	return 0;
}
