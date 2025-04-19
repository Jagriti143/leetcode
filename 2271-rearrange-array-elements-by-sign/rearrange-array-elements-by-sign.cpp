class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> p;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }else{
                p.push_back(nums[i]);
            }
        }
        int x=0;
        int y=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=p[x];
                x++;
            }else{
                nums[i]=neg[y];
                y++;
            }
        }
        return nums;

    }
};