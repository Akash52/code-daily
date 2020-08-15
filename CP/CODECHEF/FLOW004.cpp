#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;int b;
		cin>>n;
		int res =n%10; //This statement return First Digit
		while(n)
		{
			b=n%10;
			n=n/10;  //Last Digit
		}
		cout<<b+res<<endl;  //simple sum
	}

	return 0;
}
