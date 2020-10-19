#include<iostream>
using namespace std;

int volume(int l=1,int w=1,int h=1);

int main()
{
	cout<<volume(5,6);

}
int volume(int l,int w,int h)
{
	return l*w*h;
}
