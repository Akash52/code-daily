 //Mycodeshool Reference
 
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int a;
 	int *p;
 	a=10;
 	p=&a; //&a = address of a
 	cout<<"Address of P is "<<p<<endl;
 	cout<<"Value of P is "<<*p<<endl;
 	int b=20;
 	*p=b; // Will the adress in p change to point b ??
 	cout<<"Address of P is "<<p<<endl;
 	cout<<"Value of P is "<<*p<<endl;
 	
 }
