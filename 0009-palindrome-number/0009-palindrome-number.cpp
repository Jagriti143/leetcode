class Solution {
public:
    bool isPalindrome(int x) {
        
        int temp=0;
        int u=x;
        while(x!=0){
            if(temp<INT_MIN/10 || temp>INT_MAX/10){
                return false;
            }
            int rem=x%10;
            temp=(temp * 10) +rem;
            x=x/10;
        }
        if(u <0 ){
            return false;
        }
        
        if(u!=temp){
        return false;
        }
        return true;
    }
};