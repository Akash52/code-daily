#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int value;
    int position;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cin>>value;
    cin>>position;
    for(int i=0;i<position;i++){
        arr[position]=value;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
