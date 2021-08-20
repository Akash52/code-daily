#include<bits/stdc++.h>
using namespace std;



int main()
{
	int k;
	cin>>k;
	for(long long int i=1;i<=1000;i++){
	
		if(i%10 !=3 && i%3 !=0)
			--k;
			if(k==0){
				cout<<i<<'\n';
			
			}
		
	}
		return 0;
}
