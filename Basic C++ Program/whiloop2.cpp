#include<iostream>
using namespace std;

int main()
{
	int age;
	int ageTotal=0;
	int nop=0;
	
	cout<<"Enter 1st P age 0r -1 to quit"<<endl;
	cin>>age;
	while(age !=-1) 
	{
		ageTotal=ageTotal+age;
		nop++;
		
		cout<<"Enter 1st P age 0r -1 to quit"<<endl;
		cin>>age;
	}
	 cout<<"No of people Enetered : "<<nop<<endl;
	 cout<<"Average age : "<<ageTotal/nop;
	return 0;
}
