#include<bits/stdc++.h>
using namespace std;

vector<int> compute_lps(string pattern){
    int m = pattern.size();
    vector<int> lps (m, 0);
    int len = 0, i = 1;
    while(i<m){
        if (pattern[i]==pattern[len]){
            lps[i] = len + 1;
            len++;
            i++;
        }
        else{
            if(len!=0){
                len = lps[len - 1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

int main(){
    string A = "onionionspie";
    string pattern = "onions";

    int match=0, i=0, j=0;

    vector<int> lps;
    lps = compute_lps(pattern);
    // for (auto it: lps)
    // {
    //     cout << it << endl;
    // }
    for (i = 0; i < A.size();){
        cout << A[i] << j << endl;
        if (j == lps.size())
        {
            break;
        }
        if (A[i]==pattern[j]){
            cout << " matches" << endl;
            j++;
            i++;
        }
        else
        {
            if (j!=0){
                j = lps[j - 1];
            }else{
                i++;
            }
        }
    }
    cout << "out"<< i-j << endl;
    return 0;
}