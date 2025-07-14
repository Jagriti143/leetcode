class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int m=str1.size();
        int n=str2.size();
        //string s="";
        if (str1 + str2 != str2 + str1)
            return "";
        //s += str1;
        int gcd_len = gcd(m, n);
        return str1.substr(0, gcd_len);
        
    }
};