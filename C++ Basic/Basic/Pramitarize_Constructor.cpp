#include<bits/stdc++.h>
using namespace std;

class Example{
	int a,b;
	public:
		Example(int x,int y){
			a=x;
			b=y;
		}
		
		void Display(){
			cout<<a<<"\n"<<b<<endl;
		}
};

int main(){
	
	Example obj(10,20);
	obj.Display();
}
