#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int counter=0;
	
	sort(str.begin(),str.end());
	str.erase(unique(str.begin(), str.end()), str.end());
	cout<<str<<endl;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!=str[i+1])
		{
			counter++;
		}
	}
	if(counter%2==0)
	{
		cout<<"CHAT WITH HER !";
	}
	else
	{
		cout<<"IGNORE HIM !";
	}
	return 0;
}
