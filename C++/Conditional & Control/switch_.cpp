#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter age "<<endl;
	cin>>age;
	
	switch(age)
	{
		case 16:
			cout<<"hay you can drive now"<<endl;
			break;
		case 18:
			cout<<"go buy some ticket"<<endl;
			break;
		case 21:
			cout<<"buy me some beer"<<endl;
			break;
		default :
		cout<<"sorry you get nothing"<<endl;	
		
	}
}
