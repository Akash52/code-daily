#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={4,5,4,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;

    bool present=binary_search(arr,arr+n,key);

    if(present){
        cout<<"Present ";
    }
    else{
        cout<<"Absent !";
    }
}

