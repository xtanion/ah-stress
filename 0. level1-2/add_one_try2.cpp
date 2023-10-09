#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> &A)
{
    long long n = A.size();
    // cout << n;
    long long num = 0;
    int i=0, t, extra=1;
    vector<int> B;
    
    while (i<n)
    {
        t = A[n - i - 1] + extra;
        // cout << t << extra <<endl;
        extra = t / 10;
        B.push_back(t % 10);
        i++;
    }
    // cout << t << endl;

    if (t>=10){
        B.push_back(extra);
    }


    for (int i = B.size(); i>0; i--){
        if (B[i-1]==0){
            B.pop_back();
        }else{
            break;
        }
    }

    reverse(B.begin(), B.end());
    return B;
}

int main()
{
    vector<int> A{9, 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
    vector<int> output;

    output = solve(A);
    for (int i = 0; i < output.size(); i++)
    {
        cout << "OUTPUT: " << output[i] << endl;
    }
}