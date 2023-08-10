#include<bits/stdc++.h>
using namespace std;

void recurse(vector<int> &A, vector<vector<int>> &out, vector<int> &comb, int occupied[]){
    if(comb.size()==A.size()){
        out.push_back(comb);
        return;
    }

    // pick
    for(int i=0; i<A.size(); i++){
        if(!occupied[i]){
            occupied[i] = 1;
            comb.push_back(A[i]);
            recurse(A, out, comb, occupied);
            comb.pop_back();
            occupied[i] = 0;
        }
    }

}

int main(){
    vector<int> A{1, 2, 3};
    
    vector<vector<int>> out;
    vector<int> comb;
    int occupied[A.size()] = {0};

    for(int i=0; i<A.size(); i++){
        occupied[i] = 0;
    }

    recurse(A, out, comb, occupied);
    for (int i = 0; i < out.size(); i++) {
        for (int j = 0; j < out[i].size(); j++)
            cout << out[i][j] << " ";
        cout << endl;
    }
}