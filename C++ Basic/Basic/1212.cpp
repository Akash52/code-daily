#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int rem,n,count=0;
		cin>>n;
		while(n!=0){
			rem=n%10;
		n=n/10;
		if(rem==5)
		count++;
		}
		
		cout<<count<<endl;
	}
	
}
