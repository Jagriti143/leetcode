class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.size();
        string st="";
        int ans=0;
        for(int i=0;i<n;i++){
            st+=to_string(s[i]-'a'+1);
        }
        for(int i=0;i<k;i++){
            int sum=0;
            for(int j=0;j<st.size();j++){
                sum+=st[j]-'0';
            }
            st=to_string(sum);
            ans=sum;
        }
        return ans;
    }
};