class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> arr(n, 1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
            arr[j] += arr[j-1];
            }
        }
        return arr[n-1];
    }
};

