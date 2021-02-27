 //Mycodeshool Reference
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int a;
 	int *p;
 	p=&a;
 	//Pointer Arithmetic
 	cout<<"Address p is "<<p<<endl; //p is 2002
 	cout<<"Size of integer "<<sizeof(int)<<" Bytes"<<endl;
 	cout<<"Address p+1 is "<<p+1<<endl;	//p+1 is 2006
 	
 }
