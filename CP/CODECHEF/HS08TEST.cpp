#include<iostream>
using namespace std;

int main()
{
	int amnt;
	double balance;
	double rem_balance;
	cin>>amnt>>balance;
	if(amnt%5==0)
	{
		if((balance>amnt)&&((amnt+0.50)<=balance))
		{
			rem_balance=balance-amnt-0.50;
			cout<<rem_balance;
		}
		else{
			cout<<balance<<endl;
		}
	}
		else{
			cout<<balance<<endl;
		}
}
