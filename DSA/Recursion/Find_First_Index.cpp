#include<bits/stdc++.h>
using namespace std;

int findIndex(int arr[],int n,int x,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==x){
        return i;
    }
    return findIndex(arr,n,x,i+1);
}


int main()
{
    int arr[]={1,2,2,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=5;
    cout<<findIndex(arr,n,x,0);

}
