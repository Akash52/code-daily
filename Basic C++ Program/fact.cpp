#include<iostream>
using namespace std;
int factorilFinder(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return x*factorilFinder(x-1);
	}
}
int main()
{
	cout<<factorilFinder(5)<<endl;
	
}
