#include<iostream>
using namespace std;

void solid_rectangle(int n,int m)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
             cout<<"*";
        }
        cout<<endl;
    }
    
}

int main()
{
     int row,column;
    cout<<"\n Enter no of Row";
    cin>>row;
    cout<<"\n Enter no of column";
    cin>>column;
    solid_rectangle(row,column);
    return 0;
}