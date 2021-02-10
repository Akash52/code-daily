//Optimize solution Prime Solution
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int no){
	if(no==1)
		return false;
	
	for(int i=2;i<no;i++)
		if(no%i==0)
			return false;
			return true;
	
	
}

int main()
{
	int no;
	cin>>no;
	if(isPrime(no)){
		cout<<"YES "<<no<<" is prime";
	}
	else{
		cout<<"No "<<no<<" not prime";
	}
}
