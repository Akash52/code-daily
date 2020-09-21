//Given n random integers, print the distinct (unique) integers in sorted order.

#include<iostream>
#include<vector>
#include<set>
#include<iterator>
using namespace std;

int main()
{
	vector<int>random={4,5,6,7,1,5};
	set<int>s(begin(random),end(random));
	random.assign(begin(s),end(s));
	
	for(auto n:random){
		cout<<n<<" ";
		
	}
	cout<<"\n";
	return 0;
	
}
