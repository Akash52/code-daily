#include<iostream>

using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
	int num, rev=0, rem;
	cin>>num;
	for(int i=0;num>0;i++)
	{
		
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<rev<<endl;
}
}
