#include<iostream>
using namespace std;

int number(int n){
    if(n==0){
        return 0;
    }
    int ans=number(n/10);
    return ans+1;
}
int main()
{
    int n;
    cin>>n;
    cout<<number(n);
    return 0;

}
