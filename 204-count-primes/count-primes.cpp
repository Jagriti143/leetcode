class Solution {
public:
    int countPrimes(int n) {
        vector<bool> arr(n+1,true);
        if(n<=1){
            return 0;
        }
        arr[0]=arr[1]=false;
        for(int i=2;i*i<=n;i++){
            if(arr[i]){
                for(int p=i*i;p<=n;p+=i){
                    arr[p]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(arr[i]){
                count++;
            }
        }
        return count;
    }
};