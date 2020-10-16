//Check whether K-th bit is set or not

#include<iostream>
using namespace std;

void isKthBit(int n,int k)

{
		if(n&(1<<(k-1)))
		cout<<"SET";
		else
		cout<<"NOT SET";
}

int main()
{
	int n,k;
	cin>>n>>k;
	isKthBit(n,k);
	return 0;
}
