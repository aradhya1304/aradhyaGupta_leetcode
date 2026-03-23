class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        const int MOD = 1e9 + 7;

        vector<vector<long long>> maxDP(n, vector<long long>(m));
        vector<vector<long long>> minDP(n, vector<long long>(m));

        maxDP[0][0] = minDP[0][0] = grid[0][0];

   
        for (int i = 1; i < n; i++) {
            maxDP[i][0] = minDP[i][0] = maxDP[i-1][0] * grid[i][0];
        }

    
        for (int j = 1; j < m; j++) {
            maxDP[0][j] = minDP[0][j] = maxDP[0][j-1] * grid[0][j];
        }

   
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                long long val = grid[i][j];

                if (val >= 0) {
                    maxDP[i][j] = max(maxDP[i-1][j], maxDP[i][j-1]) * val;
                    minDP[i][j] = min(minDP[i-1][j], minDP[i][j-1]) * val;
                } else {
                    maxDP[i][j] = min(minDP[i-1][j], minDP[i][j-1]) * val;
                    minDP[i][j] = max(maxDP[i-1][j], maxDP[i][j-1]) * val;
                }
            }
        }

        long long res = maxDP[n-1][m-1];
        if (res < 0) return -1;
        return res % MOD;
    }
};