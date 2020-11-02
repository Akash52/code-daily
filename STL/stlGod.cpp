#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A = {12, 23, 45, 13};
    cout << A[1] << endl;
    sort(A.begin(), A.end());
    //12 13 23 45
    //o(LogN)

    bool present = binary_search(A.begin(), A.end(), 3); //true
    bool present = binary_search(A.begin(), A.end(),4 ); //False
}