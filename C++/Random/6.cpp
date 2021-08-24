#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans=0;
	while(n!=0){
		int digit=n%10;
		ans=ans*10+digit;
		n/=10;
		cout<<digit<<endl;
	}
	return 0;
}
