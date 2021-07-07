#include<iostream>
using namespace std;

int countDigit(int n){
	return floor(log10(n)+1);
}


int main()
{
		int n;
		cin>>n;
		cout<<countDigit(n)<<" ";
		return 0;
}
