#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    //Base Case
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}



int main()
{
    cout<<gcd(10,15)<<endl;
    cout<<gcd(10,15)<<endl;

    cout<<lcm(10,15)<<endl;
    cout<<lcm(10,15)<<endl;

    return 0;
    
    }