#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>&A){
    long long n = A.size();
    cout << n;
    long long num = 0, i;
    vector<int> B;

    for (i = 0; i < n; i++)
    {
        num = num + A[i] * pow(10, n - i - 1);
        cout << num << endl;
    }
    cout << num << endl;
    num += 1;

    for (i = num; i > 0;)
    {
        int t = i % 10;
        // cout << t;
        if (i == 1)
        {
            if (t!=0){
                B.push_back(t);
            }
        }
        else
        {
            B.push_back(t);
        }

        i = i / 10;
    }
    reverse(B.begin(), B.end());

    return B;
}

int main(){
    vector<int> A{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> output;

    output = solve(A);
    for (int i = 0; i < output.size(); i++){
            cout << "OUTPUT: " << output[i] << endl;
    }
}