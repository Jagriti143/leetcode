class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
         unordered_map<int,int> mp;
        /*set<int> st;
        for(int i=0;i<n;i++){
           st.insert(nums[i]);
        }
        int index=0;
        for(auto x:st){
            nums[index++] = x; 
        }
        return index;
        */
        /*int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[cnt]){
                cnt++;
                nums[cnt]=nums[i];
            }
        }
        return cnt+1;
        */

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            arr.push_back(x.first);
        }
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++) {
        nums[i] = arr[i];        
    }
    
        return arr.size();
    }
};