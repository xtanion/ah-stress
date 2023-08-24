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

void recurse(vector<int> &A, vector<int> &subset, vector<vector<int>> &out, int i){

    if (i==A.size()){
        out.push_back(subset);
        return;
    }

    recurse(A, subset, out, i+1); // exculde
    subset.push_back(A[i]);
    with_separator(subset, ",");
    recurse(A, subset, out, i+1); // include
    subset.pop_back();
}

int main(){
    vector<int>A{2,3,4};
    vector<int> t{};
    vector<vector<int>>sol;
    sol.push_back(t);
    recurse(A, t, sol, 0);
    // find(A, sol, t, 0);

    // for (int i = 0; i < sol.size(); i++) {
    //     for (int j = 0; j < sol[i].size(); j++)
    //         cout << sol[i][j] << " ";
    //     cout << endl;
    // }
}