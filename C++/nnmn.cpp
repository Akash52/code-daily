#include<bits/stdc++.h>
using namespace std;


int main(){
	int x,y,ans=0;
	cin>>x>>y;
	while(y!=0){
		ans+=x;
		y--;
	}
	cout<<ans<<" ";
	return 0;
}
