class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> arr;
        int carry=0;

        for(int i=n-1;i>=0;i--){
            int digit=0;
            if(i==n-1){
                digit=digits[n-1]+1;
                if(digit>9){
                    carry=1;
                }
                arr.push_back(digit%10);
            }else{
                digit=digits[i]+carry;
                if(digit>9){
                    carry=1;
                }else{
                    carry=0;
                }
                arr.push_back(digit%10);
            }
        }
        if(carry==1){
            arr.push_back(carry);
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};