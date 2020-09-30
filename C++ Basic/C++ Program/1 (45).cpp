#include<iostream>

using namespace std;

int main()
{
	int x=1;
	int no;
	int total=0; 
	while(x<=5){
		cin>>no;
		total=total+no;
		x++;
	}
	cout<<"your total is :"<<total<<endl;
	return 0;
}
