//https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size();
        int st=0,e=n-1;
        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
        
    }
};
