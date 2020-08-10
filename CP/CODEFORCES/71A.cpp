//A. Way Too Long Words
#include<iostream>
using namespace std;

int main()
{
	string s;
	int n; 
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s.length()>10)
		{
			cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
	return 0;
}
