#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){

    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
        return true;
    }
}

int main()
{
    int arr[]={1,0,3,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,n)){
        cout<<"Sorted";
    }else{
        cout<<"Not Sorted";
    }
    return 0;
}
