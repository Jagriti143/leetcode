class Solution {
public:
    void sortColors(vector<int>& nums) {
      int m=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            swap(nums[i],nums[m]);
            m++;
        }
    }
        for(int i=m;i<nums.size();i++){
            if(nums[i]==1){
                swap(nums[i],nums[m]);
                m++;
            }
        }
    
    }
};