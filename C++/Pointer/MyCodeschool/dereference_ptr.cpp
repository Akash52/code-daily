 //Mycodeshool Reference
 
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int a;
 	int *p;
 	a=10;
 	p=&a; //&a = address of a
 	cout<<"a="<<a<<endl;
 	*p=12;  //dereferencing
 	cout<<"a="<<a<<endl;
 }
