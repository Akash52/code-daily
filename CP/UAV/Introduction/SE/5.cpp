#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a<b){
			cout<<"<"<<endl;
		}
		if(a>b){
			cout<<">"<<endl;
		}
		if(a==b)
		{
			cout<<"="<<endl;
		}
	}
}
