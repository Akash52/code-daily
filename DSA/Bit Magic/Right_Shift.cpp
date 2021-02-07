//Left Shift Oprerator
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int x=33;
	cout<<(x>>1)<<endl;
	cout<<(x>>2)<<endl;
	cout<<(x>>3)<<endl;
	
	int y=4;
	int z=(x>>y);
	cout<<z;
	
	return 0;
	
}

/*	
	x=x / 2 pow y
	33/2 pow 1 = 16
	33/2 pow 2 = 8
	
*/
