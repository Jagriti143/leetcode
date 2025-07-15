class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size();
        int n=needle.size();
        if(n==0){
            return 0;
        }
        if(m==1 && n==1){
            if(haystack[0]==needle[0]){
                return 0;
            }
        }
        for(int i=0;i<m;i++){
            if(m>0 && n==1){
                if(haystack[i]==needle[0]){
                    return i;
                }
            }
        }
        
        for(int i=0;i<=m-n;++i){
            if(haystack.substr(i,n)==needle){
                return i;
            }
        }
        
        return -1;

    }
};