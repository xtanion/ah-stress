#include<bits/stdc++.h>
using namespace std;

int solve(){
    int  A = -2147447412;
    vector<int> digits;
    int last_dig;
    A = A > 0 ? A : A * (-1);
    for (; A > 0;)
    {
        last_dig = A % 10;
        A = A / 10;
        digits.push_back(last_dig);
    }

    for (int i = 0; i < digits.size() / 2; i++)
    {
        if (digits[i] != digits[digits.size() - i-1])
        {
            cout << digits[i] << digits[digits.size() - i];
            return 0;
        }
    }

    return 1;
}

int main(){
    cout << solve() << endl;
}