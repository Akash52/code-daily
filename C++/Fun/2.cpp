//Break-that is used to stop a loop based upon certain condition
#include<iostream>
using namespace std;

int main()
{
	int n;
	
	while(true)
	{
		cin>>n;
		if(n%7==0)
		{
			continue;
		}
		cout<<"No "<<n<<endl;
	}
	cout<<"Came out of loop"<<endl;
}
