#include<algorithm>
#include<iostream>
#include<vector>
#include<numeric>

using namespace std;
int main(){
    //Intializing array vector with array value
    int arr[]={10,20,5,23,42,15};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int>vect(arr,arr+n);
    cout<<"Vector is : ";
    for(int i=0;i<n;i++)
    cout<<vect[i]<<" ";
    //Sorting the vetore Ascending order
    sort(vect.begin(),vect.end());
    cout<<"\nvector after sorting is: "<<" ";
    for(int i=0;i<n;i++)
    cout<<vect[i]<<" ";

return 0;
}