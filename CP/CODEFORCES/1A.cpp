#include<iostream>

using namespace std;

int main()

{
	long long int a,b;
	cin>>a>>b;
	int res=0;
	
	while(a<=b){
		a*=3;
		b*=2;
		res++;
	}
	cout<<res<<endl;
	
	return 0;
}
