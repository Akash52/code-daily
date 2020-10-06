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
    //reversing the vector 
    reverse(vect.begin(),vect.end());
    cout<<"\n vector after reversing is: ";
    for(int i=0;i<n;i++)
    cout<<vect[i]<<" ";
    cout<<"\n Maximum element of vector is: ";
    cout<<*max_element(vect.begin(),vect.end());
    cout<<"\n Minumum element of vector is: ";
    cout<<*min_element(vect.begin(),vect.end());
    cout << "\nThe summation of vector elements is: "; 
    cout << accumulate(vect.begin(), vect.end(), 0); 


return 0;
}