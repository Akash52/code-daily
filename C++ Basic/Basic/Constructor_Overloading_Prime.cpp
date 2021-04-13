#include<bits/stdc++.h>

using namespace std;

class Prime{
	int a,i,k;
	public:
		
		Prime(int x){
			a=x;
			k=1;
			for(i=2;i<=a/2;i++){
				if(a%i==0){
					k=0;
					break;
				}
				else{
					k=1;
				}
			}
		}
		
		//Memeber Function
		void show(){
			if(k==1)
			cout<<a<<" Is Prime ";
			else
			cout<<a<<" Is not Prime";
		}
};
	int main(){
		int a;
		cin>>a;
		Prime ob(a);
		ob.show();
	}
