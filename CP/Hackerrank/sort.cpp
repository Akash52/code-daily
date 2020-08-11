#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n;
	vector<int>v;
	cin>>n;
	while(n--)
	{
		cin>>v;
		sort(v.begin(),v.end());
		for(auto x:v)
		cout<<x<<" ";
	}
	return 0;

}
