#include<bits/stdc++.h>
using namespace std;

int recurse(int n, vector<int>&dp){
    if (n<=2) return n;
    if(dp[n]!=-1) return dp[n];
    dp[n] = recurse(n-1, dp)+recurse(n-2, dp);
    return dp[n];
}

int main(){
    int n=44;

    vector<int>dp(n+1, -1);
    int out = recurse(n, dp);
    cout << out <<endl;
}