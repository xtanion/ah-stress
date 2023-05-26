#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    A = "acb";
    long long i, cnt;
    vector<char> chars;

    for (i = 0; i < A.length(); i++){
        cout << A[i];
        chars.push_back(A[i]);
    }

    return 0;
}