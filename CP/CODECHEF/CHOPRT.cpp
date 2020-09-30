#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a>b)
			cout<<">"<<endl;
		if(b>a)
			cout<<"<"<<endl;
		if(a==b)
			cout<<"="<<endl;
	}
	return 0;
}
