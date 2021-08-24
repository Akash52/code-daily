#include <bits/stdc++.h>
using namespace std;

bool ifAnagram(string str1,string str2)
{
	//Length
	int n1=str1.length();
	int n2=str2.length();
	//Size must same
	if(n1!=n2)
	return false;
	//Sort
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	
	for(int i=0;i<n1;i++)
		if(str1[i]!=str2[i])
		return false;
	
	return true;
	
	
}

int main()
{
	string str1="abcd";
	string str2="dcba";
	
	if(ifAnagram(str1,str2)){
		cout<<"It is a anagram"<<" ";
	}else{
		cout<<"It is not anagram"<<" ";
	}
	
	
	
	
	
}
