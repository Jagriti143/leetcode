class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int s=words.size();
        vector<string> n;
        if(words.empty() || groups.empty()){
            return n;

        }
        n.push_back(words[0]);
        for(int i=1;i<s;i++){
            if(groups[i] != groups[i - 1]){
                n.push_back(words[i]);
            }
        }
        return n;
    }
};