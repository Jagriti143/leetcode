class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int m=fruits.size();
        int n=baskets.size();
        int cnt=0;
        int i=0;
        
        vector<bool> used(n, false);
        while(i<m ){
            bool placed=false;
            int j=0;
            while(j<n){
            if(!used[j] && baskets[j] >= fruits[i]){
                used[j] = true;
                    placed = true;
                    break;
            }
            j++;
            }if(!placed){
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};