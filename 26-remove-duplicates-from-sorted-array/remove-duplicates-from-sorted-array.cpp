class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(j<nums.size() ){
            if(nums[i]==nums[j]){
                nums.erase(nums.begin()+i);
                
            }else{
                i++;
                j++;
            }
        }
        return nums.size();
    }
};