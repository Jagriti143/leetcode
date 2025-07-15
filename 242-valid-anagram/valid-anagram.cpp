class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m!=n){
            return false;
        }
        map<char,int> mp;
        for(int i=0;i<m;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
           if(mp.find(t[i]) ==mp.end()){
                return false;
            }else{
                mp[t[i]]--;
                if(mp[t[i]]==0){
                    mp.erase(t[i]);
                }
            }
        }
        return !mp.empty()? false:true;
        // map<char,int> mp;
        // map<char,int> p;
        
        // for(int i=0;i<m;i++){
        //     mp[s[i]]++;
        // }
        // for(int i=0;i<n;i++){
        //     p[t[i]]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(mp.find(t[i])==mp.end() ||  mp[t[i]]!=p[t[i]]){
        //         return false;
        //     }
        // }
        // return true;
        /*sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int l=0;
        int r=0;
        while(l<m && r<n){
            if(s[l]!=t[r]){

                return false;
            }
            l++;
            r++;
        }
        return true;
        */

    }
};