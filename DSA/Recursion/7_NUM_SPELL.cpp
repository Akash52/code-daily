#include<bits/stdc++.h>
using namespace std;
char spellings[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void print(int n){
	if(n==0){
		return;
	}
    print(n/10);
	cout<<spellings[n%10]<<" ";

}

int main()
{
	int n;
	cin>>n;
	print(n);
}
