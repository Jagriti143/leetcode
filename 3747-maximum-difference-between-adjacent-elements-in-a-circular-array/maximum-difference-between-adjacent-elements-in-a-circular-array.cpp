class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
       int n=nums.size();
       int maxi=abs(nums[n-1]-nums[0]);
       for(int i=0;i<n-1;i++){
        /*if(abs(nums[i]-nums[i+1]) >maxi){
            maxi=abs(nums[i]-nums[i+1]);
        }*/
        maxi=max(maxi,abs(nums[i]-nums[i+1]));
       } 
       return maxi;
    }
};