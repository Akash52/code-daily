#inclue<iostream>
using namespace std;
/*
ABCDE
ABCD
AB
A
*/

void printABCD(int n)
{
	for(int i=0;i<n;i++){
		char cnt_alpa=n-1+1;
		for(int j=1;j<=cnt_alpa;j++){
			cout<<cnt_alpa<<endl;
			cnt_alpa=cnt_alpa+1;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	printABCD(n);
}
