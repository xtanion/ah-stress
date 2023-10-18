#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A{1, 4, -1, 2};
    int n = A.size();
    int sumval = 4;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++){
        mp[A[i]] = 1;
    }

    vector<pair<int, int>> ans;
    vector<int> common;

    for (int i = 0; i < n; i++){
        // there can be two cases: a>x & a<x for |a-x| + |a+x| = sumval
        // if a > x then 
        if(A[i]==sumval/2 && A[i]>0){
            common.push_back(A[i]);
        }else if
    }
}