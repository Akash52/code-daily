//longest-subarray-non-negative-integers
#include<bits/stdc++.h>
using namespace std;

int longestSubNon(int arr[],int n){

    int res=0;
    for(int i=0;i<n;i++){
        int count=0;
        while(i<n && arr[i]>0){
            count++;
            i++;
        }
        res=max(res,count);
    }
    return res;
}


int main()
{
    int arr[]={1,2,3,4,-2,5,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestSubNon(arr,n);
    return 0;
}
