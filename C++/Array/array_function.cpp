//Array function
#include<iostream>
using namespace std;
void printArray(int theArray[],int sizeOfArray);

int main()
{
	int bucky[3]={20,45,655};
	int sky[6]={45,78,65,65,9};
	
	printArray(bucky,3);
	printArray(sky,3);
	

	
}
void printArray(int theArray[],int sizeOfArray)
{
	for(int x=0;x<sizeOfArray;x++){
		cout<<theArray[x]<<endl;
	}
}
