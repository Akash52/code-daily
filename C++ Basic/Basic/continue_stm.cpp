#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=0;i<=10;i++){
		int x,y;
		cout<<"Enter x & y"<<endl;
		cin>>x>>y;
		if(y==0){
			cout<<"Invalid"<<endl;
			continue;
		}
		cout<<x/y<<endl;
	}
}
