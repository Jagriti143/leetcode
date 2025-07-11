class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==0){
            return -1;
        }else if(divisor==-1 && dividend==-1){
            return abs(divisor);
        }else if(divisor==-1 && dividend==INT_MIN){
            return INT_MAX;
        }
        else{
        return dividend/divisor;
        }
    }
};