#include <iostream>
#include <vector>
using namespace std;

int findDup(vector<int>&arr){
    int len = arr.size();
    if(len>1){
        int slow = arr[0];
        int fast = arr[arr[0]];
        while(slow!=fast){
            slow = arr[slow];
            fast = arr[arr[fast]];
        }
        fast = 0;
        while(slow!=fast){
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
    }
    return -1;
}

int main() {
    vector<int>v = {1,2,2,3,4};
    cout<<findDup(v)<<endl;
    return 0;
}
