class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> cm;
        int ans1=0;
        int ans2=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    ans1++;
                    break;
                }
            }
        }
        for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        if(nums2[j]==nums1[i]){
            ans2++;
            break;  
            
        }
    }
}
    cm.push_back(ans1);
    cm.push_back(ans2);
        return cm;
    }
};