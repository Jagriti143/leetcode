class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<int>>& v) {
        if (i < 0 || j < 0 || i >= n || j >= m || v[i][j] != 1) return;
        v[i][j] = -1;
        dfs(i - 1, j, n, m, v);
        dfs(i + 1, j, n, m, v);
        dfs(i, j - 1, n, m, v);
        dfs(i, j + 1, n, m, v);
    }

    int numEnclaves(vector<vector<int>>& v) {
        int ans = 0;
        int n = v.size();
        int m = v[0].size();

        for (int i = 0; i < n; i++) {
            dfs(i, 0, n, m, v);
            dfs(i, m - 1, n, m, v);
        }

        for (int j = 0; j < m; j++) {
            dfs(0, j, n, m, v);
            dfs(n - 1, j, n, m, v);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == 1) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
