class Solution {
public:
int digit(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;

    }
    return count;
}
    int findNumbers(vector<int>& nums) {
        int ans=0;
      for(int i=0;i<nums.size();i++){
        int x=digit(nums[i]);
        if(x%2==0){
            ans++;
        }
      }
           
return ans;
        
    }
};