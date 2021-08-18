#include<bits/stdc++.h>
using namespace std;


void reverseArray(int arr[],int low,int high)
{
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftRotate(int arr[],int d,int n){
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    leftRotate(arr,d,n);
    printArray(arr,n);

    return 0;


}
