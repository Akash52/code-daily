#include<algorithm>
#include<iostream>
using namespace std;
void show(int a[],int arraysize)
{
    for(int i=0;i<arraysize;i++)
    cout<<a[i] <<" ";
}


int main()
{
    int a[]={1,5,2,5,2,5,7,0};
    int asize=sizeof(a)/sizeof(a[0]);

    cout<<"\n The array is : ";
    show(a,asize);


    cout<<"\n\n Let's say we want search for 2 in array";
    cout<<"\n So,we first sort the array ";
    sort(a,a+asize);
    cout<<"\n\n the array After sorting ";
    show(a,asize);

    cout<<"\n\n Now,we do Binary Search";
    if(binary_search(a,a+10,2))
    cout<<"\nThe element found in array";
    else
    cout<<"\nThe element not found in array";
    
    cout<<"\n\nNow,say we want to search for 10 ";
    if(binary_search(a,a+10,10))
    cout<<"\n Element found in the array";
    else
    cout<<"\n Element not found in array";
    


return 0;


}