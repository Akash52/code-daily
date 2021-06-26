#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n<0){
		cout<<"Invalid Number";
	}else{
		cout<<n*(n+1)/2;
	}
	return 0;
}
