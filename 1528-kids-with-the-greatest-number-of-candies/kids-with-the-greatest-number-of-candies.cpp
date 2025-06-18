class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> arr(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(candies[i],maxi);
        }
        for(int i=0;i<n;i++){
            candies[i]+=extraCandies;
        }
        for(int i=0;i<n;i++){
            if(candies[i]>=maxi){
                arr[i]=true;
            }else{
                arr[i]=false;
            }
        }
        return arr;
    }
};