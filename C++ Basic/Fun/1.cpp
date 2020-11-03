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
			break;
		}
		cout<<"No "<<n<<endl;
	}
}
