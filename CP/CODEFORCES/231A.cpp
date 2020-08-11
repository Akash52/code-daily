#include<iostream>
using namespace std;
int main()
{
	int n,p,v,j,counter=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p>>v>>j;
		if(p+v+j>=2)  //1+1+0=2 1+1+1=3
		{
			counter++;
		}
	
	}
	cout<<counter<<endl;
	return 0;
}
