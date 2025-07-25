class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==target){
    //             return i;
    //         }else if (nums[i]>target){
    //             return i;
    //         }
    //     }
    //     return nums.size();
    int n=nums.size();
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return left;
    }
};