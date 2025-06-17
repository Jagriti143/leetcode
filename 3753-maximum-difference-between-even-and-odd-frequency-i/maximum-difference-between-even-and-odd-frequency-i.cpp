class Solution {
public:
    int maxDifference(string s) {
        unordered_map <char,int> jaggu;
        for(int i=0;i<s.size();i++){
            jaggu[s[i]]++;
        }
        int even=INT_MAX;
        int odd=-1;
        for(auto [x,y]:jaggu){
            if(y%2==0 ){
                even=min(even,y);
            }else{
                odd=max(odd,y);
            }
        }
        
        return odd-even;
    }
};