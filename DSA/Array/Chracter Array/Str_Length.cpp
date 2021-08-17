#include<bits/stdc++.h>
using namespace std;

int lengthOf(char name[]){
	
	int count=0;
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	return count;
}

int main()
{
	char name[100];
	cin>>name;
	cout<<lengthOf(name);
	return 0;
}
