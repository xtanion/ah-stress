#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>A{"cde", "dec"};

    unordered_map<string, vector<int>> mp;
    for(int i=0; i<A.size(); i++){
        sort(A[i].begin(), A[i].end());
        mp[A[i]].push_back(i+1);
        // cout << A[0].find(A[1][0]) <<endl;
    }

    vector<vector<int>> out;
    for(auto it:mp){
        out.push_back(it.second);
    }
    
    for(int i=0; i<out.size(); i++){
        for(int j=0; j<out[i].size(); j++){
            cout << out[i][j] << " ";
        }
        cout << endl; 
    }
}