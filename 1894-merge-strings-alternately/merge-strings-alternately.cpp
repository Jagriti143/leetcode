class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string a="";
        int l=0;
        int r=0;
        while(l<word1.size() && r<word2.size()){
            a=a+word1[l];
            l++;
           a=a+word2[r];
            r++;
           
        }

        while(word1.size()>l ){
            a=a+word1[l];
           l++;
        }
        while(word2.size()>r){
            a=a+word2[r];
            r++;
            
        }
        return a;
    }
};