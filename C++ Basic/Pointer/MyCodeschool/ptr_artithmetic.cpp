 //Mycodeshool Reference
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int a=10;
 	int *p;
 	p=&a;
 	//Pointer Arithmetic
 	cout<<"\nAddress p is "<<p<<endl; //p is 2002
 	cout<<"\nvalue of p is "<<*p<<endl;
 	cout<<"\nSize of integer "<<sizeof(int)<<" Bytes"<<endl;
 	cout<<"\nAddress p+1 is "<<p+1<<endl;	//p+1 is 2006
 	cout<<"\nValue of p+1 is "<<(*p+1)<<endl;
 	
 }
