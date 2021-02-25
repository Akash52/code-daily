#include<iostream>
using namespace std;

int main()
{

	char ch = 'a';
	char* ptr = &ch;
	ch++;  // A -by-> B 
	cout << *ptr << endl; // -->B
}
