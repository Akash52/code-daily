#include <bits/stdc++.h> 
using namespace std;

int main() 
{
	int n,r,rev=0;
        cin >> n;
        for(int i=0;n>0;i++)
        {   
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        cout << rev << endl;
}
