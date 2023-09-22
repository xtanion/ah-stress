#include<bits/stdc++.h>
using namespace std;

int recurse(int i, vector<int>&arr, vector<int>&dp){
    if(i>=arr.size()) return 0;
    if(dp[i]!=-1) return dp[i];

    // cout << "begin: " << arr[i]  << " " << i << endl;

    int tmax = arr[i];
    for(int j=i+2; j<arr.size(); j++){
        int t = recurse(j, arr, dp) + arr[i];
        tmax = max(tmax, t);
    }

    return dp[i] = tmax;
}

int main(){
    vector<int>nums{2,7,9,3,1};
    vector<int>dp(nums.size()+1, -1);
    int zero = recurse(0, nums, dp);
    int ones = recurse(1, nums, dp);
    return max(zero, ones);
}