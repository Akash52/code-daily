#include<bits/stdc++.h>

using namespace std;

int main()
{
	//Assume integer takes 4 bytes and integer pointer 8 bytes.
int a[5];
int *c;
cout << sizeof(a) << " "<< sizeof(c)<<endl;

//Fill the output

int b[] = {1, 2, 3, 4};
cout << *(b) << " " << *(b+1)<<endl;

//Assume that address of 0th index of array ‘a’ is : 200.

int cr[6]={1,2,3};

cout<<cr<<" "<<&cr<<endl;

//Assume that address of 0th index of array ‘a’ is : 200. What is the output -

int arr[6]={1,2,3};

cout<<(a+2)<<endl;

// Assume address of 0th index of array 'a' is 200.

int arry[6]={1,2,3};

int *br=arry;
cout<<br[2]<<endl;

//Assume address of 0th index of array 'a' is 200.

int ab[] = {1, 2, 3, 4, 5};
cout << *(ab) << " " << *(ab + 4);









	
	
}
