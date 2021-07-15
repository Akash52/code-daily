#include<iostream>
using namespace std;

bool isPal(int n){
	int rev=0;
	int num=n;
	while(num!=0){
		 int digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
	}
	return (rev==num);
}


int main()
{
	int n=111;
	if(isPal(n)){
		cout<<"True";
	}else
	{
		cout<<"False";
	}
	
}
