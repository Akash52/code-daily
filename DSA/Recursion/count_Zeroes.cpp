//Count Zero

#include<iostream>

using namespace std;

int countZeroes(int n){
	if(n==0)
	return 0;

	int curr_digit=countZeroes(n/10);
	int last_digit=n%10;

	if(last_digit==0){
        return 1+curr_digit;
	}else{
	   return curr_digit;
	}

}

int main()
{
	cout<<countZeroes(1030);
	return 0;
}
