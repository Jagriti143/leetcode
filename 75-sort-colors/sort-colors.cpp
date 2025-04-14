class Solution {
public:
    void sortColors(vector<int>& nums) {
      /*int m=0;
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
        */
        int left=0;
        int mid=0;
        int right=nums.size()-1;
        while(mid<=right){
            if(nums[mid]==2){
                swap(nums[mid],nums[right]);
                right--;
            }
            else if(nums[mid]==0){
                swap(nums[mid],nums[left]);
                mid++;
                left++;
            }else{
                mid++;
            }
        }
    
    }
};