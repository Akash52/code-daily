#include<bits/stdc++.h>
using namespace std;

int maxBought(int price[],int n)
{
	int profit=0;
	for(int i=1;i<n;i++)
	if(price[i]>price[i-1])
	profit+=(price[i]-price[i-1]);
	return profit;
}

int main()
{
	int price[]={10,20,30};
	int n=sizeof(price)/sizeof(price[0]);
	cout<<maxBought(price,n);
	return 0;
}
