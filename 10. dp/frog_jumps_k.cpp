#include <bits/stdc++.h> 
using namespace std;

int recurse(int i, vector<int>&arr, vector<int>&dp, int&k){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];

    int tmin = INT_MAX;
    for(int j=1; j<=k; j++){
        int t = INT_MAX;
        if (i-j>=0)
            t = recurse(i-j, arr, dp, k) + abs(arr[i] - arr[i-j])
        tmin = min(tmin, t);
    }

    return dp[i] = tmin;
    // int left = recurse(i-1, arr, dp) + abs(arr[i]-arr[i-1]);
    // int right=INT_MAX;
    // if(i>1) right = recurse(i-2, arr, dp) + abs(arr[i]-arr[i-2]);
    // return dp[i] = min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    int n=4, k=2;
    vector<int>dp(n+1, -1);
    // vector<int>vis(n, -1);
    int ans = recurse(n-1, heights, dp,k);
    cout << ans <<endl;
}