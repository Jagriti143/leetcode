class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        // int maxi=-1;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]<nums[j]){
        //             maxi=max(maxi,nums[j]-nums[i]);
        //         }
                
        //     }
        // }

        int m=nums[0];
        int p=-1;
        for(int i=1;i<n;i++){
            if(m>nums[i]){
                m=nums[i];
            }
            p=max(p,nums[i]-m);
        }
        return (p==0)?-1:p;
    }
};

