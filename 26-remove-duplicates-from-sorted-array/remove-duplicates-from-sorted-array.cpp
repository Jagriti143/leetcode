class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(nums.size()>j){
            if(nums[i]==nums[j]){
                nums.erase(nums.begin()+j);

            }else{
                i++;
                j++;
            }
        }
        return nums.size();
    }
};