#include<isotream>

using namespace std;

int main(){
	int a = 50;	// current A was 50
 	int *ptr = &a; //*ptr pointing a
 	int *q = ptr;	//ptr assigned *q
 	(*q)++;	//*q increment by 1 
 	cout << a  << endl; //then output will be 51

}
