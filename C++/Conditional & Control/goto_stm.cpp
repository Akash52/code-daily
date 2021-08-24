#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	if(n%2==0)
		goto lable1;
		else
		goto label2;
		
		lable1:
		 cout<<"Even"<<" ";
		return 0;
		label2:
		cout<<"Odd"<<" ";
	
}
