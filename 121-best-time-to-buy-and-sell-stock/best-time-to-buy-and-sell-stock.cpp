class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector<int> suff(prices.size());
        // int n=prices.size();
        // suff[n-1]=prices[n-1];
        // for(int i=n-2;i>=0;i--){
        //     suff[i]=max(suff[i+1],prices[i]);
        // }
        // int diff=0;
        // for(int i=0;i<n-1;i++){
        //     diff=max(diff,suff[i]-prices[i]);
        // }
        // return diff;

        int profit=0;
        int base=prices[0];
        for(int i=0;i<prices.size();i++){
            if(base>prices[i]){
                base=prices[i];
            }
            profit=max(profit,prices[i]-base);
        }
        return profit;
    }
};