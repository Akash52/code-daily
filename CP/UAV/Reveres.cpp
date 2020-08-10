#include<iostream>

using namespace std;
int main()
{
	int num, rev=0, rem,tc;
	cin>>tc;
	while(tc--)
	{
	cin>>num;
	while(num!=0)
	{
		
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<rev<<endl;
}
}
