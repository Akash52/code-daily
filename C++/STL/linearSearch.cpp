#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()

{
    int arr[]={10,20,5,23,42,20,15};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int>vect(arr,arr+n);

    cout<< " Occurence of 20 in vectore : ";

    cout<<count(vect.begin(),vect.end(),5);

    find(vect.begin(),vect.end(),5) !=vect.end()?
    cout<< "\n Element found":
    cout<< "\n Element not found";
    return 0;
}