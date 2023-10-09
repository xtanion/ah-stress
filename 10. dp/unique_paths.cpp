// written originallly on leetcode by me :)
class Solution {
public:
    int recurse(int i, int j, int m, int n, vector<vector<int>>&dp){
        if(i>m || j>n) return 0;
        if(i==m && j==n) return 1;

        if(dp[i][j]!=-1) return dp[i][j];
        int down = recurse(i+1, j, m, n, dp);
        int right = recurse(i, j+1, m, n, dp);
        return dp[i][j]=down + right;
    }
    int uniquePaths(int m, int n) {
        int ans = 0;
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
        ans = recurse(1, 1, m, n, dp);
        // cout << ans <<endl;
        return ans;
    }
};