#include<bits/stdc++.h>
using namespace std;


void recurse(int num, vector<vector<int>> &out, vector<int> &comb, int n, int k){
    if(num>n){
        if (comb.size()==k){
            out.push_back(comb);
        }
        return;
    }

    // don't select
    recurse(num+1, out, comb, n, k);
    
    // select
    comb.push_back(num);
    recurse(num+1, out, comb, n, k);
    comb.pop_back();
}
int main(){
    int n=5, k=3;
    vector<vector<int>> out;
    vector<int> comb;

    recurse(1, out, comb, n, k);
    sort(out.begin(), out.end());
    for (int i = 0; i < out.size(); i++) {
        for (int j = 0; j < out[i].size(); j++)
            cout << out[i][j] << " ";
        cout << endl;
    }
}