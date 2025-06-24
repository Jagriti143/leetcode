class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int n=num1.size();
        int m=num2.size();
        vector<int> result(max(m,n)+1,0);
        int i=0,j=0,carry=0;
        while(i<n||j<m || carry){
                int x = (i < n) ? num1[n - 1 - i] - '0' : 0; 
                int y = (j < m) ? num2[m - 1 - j] - '0' : 0; 
                int sum = x + y + carry; 
                result[result.size() - 1 - std::max(i, j)] = sum % 10; 
                carry = sum / 10; 
                i++;
                j++;
            }

        std::string resultStr;
        for (int digit : result) {
            if (!(resultStr.empty() && digit == 0)) { 
                resultStr += std::to_string(digit);
            }
        }

        return resultStr.empty() ? "0" : resultStr; 
    }
};