//Recursive Approach

#include<bits/stdc++.h>

using namespace std;

int power(int a,int b)
{

if(b==0) return 1;  //if 0
long long tmp=power(a,b/2); 
long result=tmp*tmp; //eve no.
if(b%2==1)		
result *=a;		//odd no

return result;		
}

int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<power(a,b);
	return 0;
}
