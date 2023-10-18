#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3, k = 3;

    int letters = 26, t;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        t = i % k;
        ans = ans * (letters - t);
    }
    cout << ans << endl;
    return ans;
}