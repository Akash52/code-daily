#include<bits/stdc++.h>
using namespace std;


class Construct{
	public:
		float area;
		//Default Constructor
		Construct(){
			area=0;
		}
		//Parameterized Constructor
		
		Construct(int a,int b){
			area=a*b;
		}
		
		void display(){
			cout<<"Area : "<<area<<endl;
		}
		
};

int main(){
	
	Construct o1;
	Construct o2(20,10);
	
	o1.display();
	o2.display();
	
}

