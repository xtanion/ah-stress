#include<bits/stdc++.h>
using namespace std;


void recurse(vector<int> &A, set<vector<int>> &out, vector<int> &comb, int target, int i){
    if (i==A.size()){
        if(target==0){
            // sort(comb.begin(), comb.end());
            out.insert(comb);
        }
        return;
    }

    // no pick
    recurse(A, out, comb, target, i+1);
    comb.push_back(A[i]);
    recurse(A, out, comb, target-A[i], i+1);
    comb.pop_back();
}

int main(){
    vector<int> A{10, 1, 2, 7, 6, 1, 5};
    int target=8;

    sort(A.begin(), A.end());
    set<vector<int>> sol_set;
    vector<int>comb;
    recurse(A, sol_set, comb, target, 0);
    vector<vector<int>> sol(sol_set.begin(), sol_set.end());

    for (int i = 0; i < sol.size(); i++) {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }
}