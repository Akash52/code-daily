#include<iostream>
using namespace std;

int main(){
	int t,count=0;;
	cin>>t;
	while(t--)
	{
		int n;
	
		cin>>n;
		while(n)
		{
		
		if(n>=100)
		n-=100;
		else if(n>=50)
		n-=50;
		else if(n>=10)
		n-=10;
		else if(n>=5)
		n-=5;
		else
		n-=1;
		count++;
	}
	cout<<count<<endl;
}
	return 0;
	
}
