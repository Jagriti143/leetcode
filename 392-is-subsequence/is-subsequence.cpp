class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m>n){
            return false;
        }
        int left=0;
        int right=0;
        while(right<n && left<m) {
            if(s[left]==t[right]){
                left++;
            }
            right++;
        }
        if(left==m){
            return true;
        }
        return false;
    }
};