#include<bits/stdc++.h>
using namespace std;

vector<int>lps(string A){
    int n = A.size();
    vector<int> out(n, 0);
    int len = 0, i = 1;

    while(i<n){
        if(A[i]==A[len]){
            out[i] = len + 1;
            len++;
            i++;
        }
        else
        {
            if(len!=0){
                len = out[len - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return out;
}
int main(){
    string A = "efaba";
    string B = A;
    reverse(A.begin(), A.end());

    string combined = A + "#" + B;
    // cout << combined << endl;

    vector<int> out = lps(combined);
    // for(auto it:out){
    //     cout << it << endl;
    // }
    return A.size() - out.back();
}