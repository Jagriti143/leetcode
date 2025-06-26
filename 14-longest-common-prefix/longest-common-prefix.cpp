class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // if (strs.empty()) return "";
        
        // string mini = *min_element(strs.begin(), strs.end());
        // string maxi = *max_element(strs.begin(), strs.end());
        
        // int i = 0;
        // while (i < mini.size() && mini[i] == maxi[i]) {
        //     i++;
        // }
        
        // return mini.substr(0, i);
        int n=strs.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int k=strs[i].size();
            mini=min(mini,k);
        }
        string count="";
        for(int i=0;i<mini;i++){
            char c=strs[0][i];
            bool flag=true;
            for(int j=1;j<n;j++){
                if(strs[j][i]!=c){
                    flag=false;
                }
            }
            if(flag) count+=c;
            else break;
        }
        return count;
    }
};
