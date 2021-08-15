#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={34,43,2,1,22,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    //Saerch --> find
    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
    int index=it-arr;
    cout<<index;
}

