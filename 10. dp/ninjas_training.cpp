//  tried to solve on coding ninjas
int recurse(vector<vector<int>>&arr, int i, int prev, vector<vector<int>>&dp){
    if(i>=arr.size()) return 0;
    int maxm = 0;
    if(i==0){
        for (int i=0; i<3; i++){
            int point = arr[0][i]+recurse(arr, 1, i, dp);
            maxm = max(point, maxm);
        }
        return maxm;
    }

    if(dp[i][prev]!=-1) return dp[i][prev];
    
    for(int task=0; task<3; task++){
        if(task==prev) continue;
        int point = arr[i][task] + recurse(arr, i+1, task, dp);
        maxm = max(maxm, point);

    }
    return dp[i][prev]=maxm;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>>dp(n, vector<int>(4, -1));
    int maxm=recurse(points, 0, 0, dp);
    // for (int i=0; i<3; i++){
    //     int point = points[0][i]+recurse(points, 1, i);
    //     maxm = max(point, maxm);
    // }
    return maxm;
}