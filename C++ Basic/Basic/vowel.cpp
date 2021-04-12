#include<iostream>
using namespace std;

int main()
{
	char c;
	int isLwrVowel,isUprVowel;
	cout<<" Enter Alphabet :";
	cin>>c;
	isLwrVowel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	isUprVowel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
if(isLwrVowel || isUprVowel)
	
		cout<<c<<" is vowel";
		else
		cout<<c<<" is a consonant";	
						
	return 0;
}
