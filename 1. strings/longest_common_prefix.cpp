#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> A{"ABCD"};
    sort(A.begin(), A.end());
    int n = A.size();
    string out="";

    for (int i = 0; i < A[0].size(); i++){
        if(A[0][i] == A[n-1][i]){
            cout << A[0][i] << endl;
            out += A[0][i];
        }else{
            cout <<"breaks"<< out << endl;
            return 0;
        }
    }
    cout << out << endl;
    return 0;
}