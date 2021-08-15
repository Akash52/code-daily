 //Mycodeshool Reference
 
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int a;
 	int *p;
 	a=10;
 	p=&a; //&a = address of a
 	cout<<p<<endl;
 	cout<<*p<<endl; // *p - value at adress pointed by p
 	cout<<&a<<endl; // also return 
 }
