#include<bits/stdc++.h>
using namespace std;

int recurse(int i, vector<int>&arr, vector<int>&dp){
    if(i==0) return arr[i];
    if(i<0) return 0;
    if(dp[i]!=-1) return dp[i];

    int pick = arr[i] + recurse(i-2, arr, dp);
    int nopick = 0 + recurse(i-1, arr, dp);

    return dp[i] = max(pick, nopick);
}

int main(){
    vector<int>nums{200, 3, 140, 20, 10};
    
    int ans1, ans2;
    int n = nums.size();
    vector<int>dp1(n, -1);
    vector<int>dp2(n, -1);
    vector<int>arr1(nums.begin()+1, nums.end());
    vector<int>arr2(nums.begin(), nums.end()-1);
    ans1 = recurse(n-2, arr1, dp1);
    ans2 = recurse(n-2, arr2, dp2);
    cout << ans1 << " " << ans2 << endl;
    
}