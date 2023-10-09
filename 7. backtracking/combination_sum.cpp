#include<bits/stdc++.h>
using namespace std;

template <typename S>
void with_separator(const vector<S>& vec,
                    string sep = " ")
{
    // Iterating over all elements of vector
    for (auto elem : vec) {
        cout << elem << sep;
    }
 
    cout << endl;
}

void recurse(vector<int> &A, vector<int> &comb, set<vector<int>>& out, int target, int i){
    // cout << "sum: "<< target <<endl;

    if(i == A.size()){
        if(target==0){
            sort(comb.begin(),comb.end());
            out.insert(comb);
        }
        return;
    }

    if(A[i] <= target){
        comb.push_back(A[i]);
        recurse(A, comb, out, target-A[i], i);
        comb.pop_back();
    }

    recurse(A, comb, out, target, i+1);

}

int main(){

    vector<int> A{8, 10, 6, 11, 1, 16, 8 };
    int target=28;
    // vector<vector<int>> sol;
    vector<int>comb;
    set<vector<int>> copy;

    recurse(A, comb, copy, target, 0);
    vector<vector<int>>sol(copy.begin(), copy.end());
    for (int i = 0; i < sol.size(); i++) {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }
}