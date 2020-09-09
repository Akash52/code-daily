#include<iostream>
using namespace std;

int main()
{
	string word,hello="hello";
	int j=0,pass=0;
	cin>>word;
	for(int i=0;i<word.size();i++)
	{
		if(word[i]==hello[j])
		{
			j++;
			pass++;
		}		
	}
	if(pass==5)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	return 0;
}
