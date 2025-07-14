class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        int prod=1;
        pre[0]=1;
        suf[n-1]=1;
        for(int i=1;i<nums.size();i++){
            prod*=nums[i-1];
            pre[i]=prod;

        }
        prod=1;
        for(int i=n-2;i>=0;i--){
            prod*=nums[i+1];
            suf[i]=prod;

        }
        for(int i=0;i<n;i++){
        nums[i]=pre[i]*suf[i];
    }
    return nums;
    }
};