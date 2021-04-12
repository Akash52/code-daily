#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	int product;
	cin>>a>>b;
	
	while(b!=0){
		product+=a;
		b--;
	}
	cout<<product<<endl;
}
