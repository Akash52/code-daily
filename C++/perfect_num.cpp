#include<bits/stdc++.h>
using namespace std;

bool perfect(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0)
		cout<<i<<" ";
		sum+=i;
		if(sum==n){
			return true;
		}
		
	}
	return false;
}


int main()
{
	int n;
	cin>>n;
	if(perfect(n)){
		cout<<"Perfect Number";
	}else{
		cout<<"Not Perfect Number";
	}
	return 0;
}
