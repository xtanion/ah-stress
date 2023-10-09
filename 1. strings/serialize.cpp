#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> A{"play", "slay", "hehehehe"};
    string out = "";
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        out = out + A[i]+ to_string(A[i].size()) + "~";
    }
    cout << out << endl;
    return 0;
}