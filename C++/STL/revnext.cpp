#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int a=10,b=20;

    swap(a,b);
    cout<<a<<" and "<<b<<endl;

    //Min Max
    cout<<"Maximum is "<<max(a,b)<<endl;
    cout<<"Minimum is "<<min(a,b)<<endl;

    //Revrse

    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,arr+n);
    //reverse(arr,arr+2);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    
    next_permutation(arr,arr+n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
    return 0;
}

