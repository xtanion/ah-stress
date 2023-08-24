#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

    vector<int> A{-4, 3};
    vector<int> B{-2, -2};

    // A & B are sorted already.
    int i, j=0;
    for(i=0; i<A.size(); i++){
        if(j < B.size()){
            if (B[j] < A[i]){
            cout << "inserting: "<< B[j] << "at: " << i <<endl;
            A.insert(A.begin()+i, B[j]);
            j++;
        }
        }
    }

    for(;j<B.size(); j++){
        A.push_back(B[j]);
    }

    for(i=0; i<A.size(); i++){
        cout << A[i] << " " <<endl;
    }
    return 0;
}