class Solution {
public:
    bool isHappy(int n) {
       
     while (n != 1 && n != 4) {  
        int sum = 0;
        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, 2);
            temp /= 10;
            
        }
        n = sum;
       
    }
    return n==1;
    }
};