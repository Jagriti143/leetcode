class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int i=0;
        int n=nums.size();
        while(i<n){
            int cnt=0;
            while(i<n &&nums[i]==1){
                cnt++;
                i++;
            }
            i++;
            ans=max(cnt,ans);
        }
       return ans;
    }
};