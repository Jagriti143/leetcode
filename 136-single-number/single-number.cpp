class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        // unordered_map<int,int> arr;
        // for(int i=0;i<n;i++){
        //     arr[nums[i]]++;
        // }
        // for(auto x:arr){
        //     if(x.second==1){
        //         return x.first;
        //     }
        // }
        // return -1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums[n-1];
    }
};