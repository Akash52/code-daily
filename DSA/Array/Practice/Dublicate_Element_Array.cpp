#include<bits/stdc++.h>
using namespace std;

bool isDublicate(int arr[],int n){

        sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
            return true;

    }
     return false;
}

int main()
{
    int arr[]={1,2,3,4,5,6,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(isDublicate(arr,n)){
        cout<<"Dublicate Array"<<" ";
    }else{
        cout<<"Not Dublicate"<<" ";
    }
    return 0;
}
