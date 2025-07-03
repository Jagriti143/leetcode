class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(k>word.size()){
            string temp="";
            for(int i=0;i<word.size();i++){
                temp+=(word[i]+1);
            }
            word.append(temp);
        }
        
        return word[k-1];
    }
};