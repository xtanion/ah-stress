#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A){
    long long i, j, n=A.size();
    int out = 0, num;

    // divide and conqour baby, Nah
    for (i = 1; i < n-1; i++){
        for (j = 0; j < n; j++){
            if (j < i && (A[j] > A[i] || A[j]==A[i])){
                out = 0;
                break;
            }

            if (j>i && (A[j] < A[i] || A[j]==A[i])){
                out = 0;
                break;
            }

            out = 1;
        }

        cout << "num" << A[i] << "out" << out << endl;
        if (out == 1){
            break;
        }
    }
    return out;
}

int main()
{
    vector<int> A{1, 2, 3, 4, 5, 4, 3, 2, 3, 10};
    int output;

    output = solve(A);
    cout << "output: " << output << endl;
}