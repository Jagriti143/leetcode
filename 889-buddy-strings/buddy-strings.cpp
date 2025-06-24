class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int m = s.size();
        int n = goal.size();
        
        if (m != n) return false;

        if (s == goal) {
            unordered_set<char> seen;
            for (char c : s) {
                if (seen.count(c)) return true;
                seen.insert(c);
            }
            return false;
        }

        vector<int> diff;
        for (int i = 0; i < m; ++i) {
            if (s[i] != goal[i]) {
                diff.push_back(i);
            }
        }

        int sizeDifference = diff.size();
        return (sizeDifference == 2 && s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]]);
    }
};
