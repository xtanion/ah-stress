#include<bits/stdc++.h>
using namespace std;

int count_one(int num)
{
    int cnt=0;
    while (num)
    {
        if (num & 1) // 1
            cnt += 1;
        else // 0
            cnt += 0;
        num >>= 1; // Right Shift by 1
    }
    return cnt;
}

int bit_diff(int a, int b){
    int num_xor, sum;
    num_xor = a ^ b;

    sum = count_one(num_xor);
    return sum;
}
int solve(vector<int> A){
    int i, j, n=A.size();
    int tot_sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++){
            if (j!=i){
                tot_sum += bit_diff(A[i], A[j]);
            }
        }
    }
    return tot_sum;
}

int main(){
    vector<int> A{1};
    int out;
    out = solve(A);
    cout << "ans: " << out << endl;
}