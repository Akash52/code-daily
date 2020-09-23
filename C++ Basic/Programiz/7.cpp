//Check Vowel or a Consonant Manually
#include<iostream>
using namespace std;

int main()
{
	char c;
	int isLwr,isUpr;
	cout<<" Enter an Alphabet : ";
	cin>>c;
	
	isLwr=(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u');
	isUpr=(c=='A' || c=='E'|| c=='I'|| c=='O'|| c=='U');
	if(isLwr || isUpr)
	{
		cout<<c<<" is vowel";
	}
	else
	{
		cout<<c<<" is not vowel";
	}
	return 0;
}

