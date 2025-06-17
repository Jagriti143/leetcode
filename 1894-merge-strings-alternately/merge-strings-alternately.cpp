class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string x="";
        int left=0;
        int right=0;
        int m=word1.size();
        int n=word2.size();
        while(left<m && right<n){
            x=x+word1[left];
            x=x+word2[right];
            left++;
            right++;
        }
        while(left<m){
            x+=word1[left];
            left++;
        }
        while(right<n){
            x+=word2[right];
            right++;
        }
        return x;
    }

    
};