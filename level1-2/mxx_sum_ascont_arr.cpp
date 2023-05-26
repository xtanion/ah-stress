#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &A)
{
    long long N = A.size();
    long long i, sum=A[0], max=A[0];

    for (i = 1; i < N; i++)
    {
        if (sum+A[i] > A[i]){
            sum += A[i];
        }
        else{
            sum = A[i];
        }

        if (sum > max){
            max = sum;
        }
    }

    return max;
}

int main()
{
    vector<int> A{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int output;

    output = solve(A);
    cout << "OUTPUT: " << output << endl;
}