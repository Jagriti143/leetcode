class Solution {
public:
bool vowel(char w){
    w=tolower(w);
    if(w=='a'||w=='e'||w=='i'||w=='o'||w=='u'){
        return true;
    }
    return false;
}
    bool isValid(string word) {
        int n=word.size();
        if(n<3){
            return false;
        }
        bool v=false;
        bool d=false;
        bool c=false;
        for(int i=0;i<n;i++){
            if(!isalnum(word[i])){
                return false;
            }
            if(vowel(word[i])==true){
                v=true;
            }else if(isdigit(word[i])){
                d=true;
            }else {
                c=true;
            }
        }
        if(v==true && c==true){
            return true;
        }
        return false;
    }
};