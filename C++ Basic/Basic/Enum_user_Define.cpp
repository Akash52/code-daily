#include<bits/stdc++.h>
using namespace std; 

int main()
{
	//Defining enum Gender
	enum Gender {Male,Female
	};
	
	//Creating Gender type variable
	Gender gender=Female;
	
	switch(gender){
		case Male:
			cout<<"Gender is Male";
			break;
			case Female:
				cout<<"Gender is Female";
				break;
				default:
					cout<<"Value can be Male or Female";
	}
	return 0;
}
