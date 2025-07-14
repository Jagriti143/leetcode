class Solution {

public:
    bool x(char c){
        if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int d=s.size();
        int left=0;
        int right=d-1;
        while(left<right){
            if(x(s[left])==true && x(s[right])!=true){
                right--;
            }else if(x(s[left])!=true && x(s[right])==true){
                left++;
            }else if(x(s[left])==true && x(s[right])==true){
                swap(s[left],s[right]);
                left++;
                right--;
            }else{
                left++;
                right--;
            }
        }
        return s;
        
    }
    
};