class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string mini = *min_element(strs.begin(), strs.end());
        string maxi = *max_element(strs.begin(), strs.end());
        
        int i = 0;
        while (i < mini.size() && mini[i] == maxi[i]) {
            i++;
        }
        
        return mini.substr(0, i);
    }
};
