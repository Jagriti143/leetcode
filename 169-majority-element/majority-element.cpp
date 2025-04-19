class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> arr;
        for(int i:nums){
            arr[i]++;

        }
        for(auto i:arr){
            if(i.second> nums.size()/2){
                return i.first;
            }
        }
        return 0;
    }
};