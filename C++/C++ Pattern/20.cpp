#include<bits/stdc++.h>
using namespace std;


int main()
{
	int i,j,rows;
	cin>>rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

/*
5
*
**
***
****
*****
*/
