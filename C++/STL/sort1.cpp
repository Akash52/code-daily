#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int n,key;
   cin>>n;
   int arr[1000];

   for(int i=0;i<n;i++){
   cin>>arr[i];
   }

   sort(arr,arr+1);

   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ,";
   }
   
return 0;
}

