#include<bits/stdc++.h>
using namespace std;

int removeDublicate(int arr[],int n){

    int res=1;
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int arr[]={1,2,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    n=removeDublicate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}
