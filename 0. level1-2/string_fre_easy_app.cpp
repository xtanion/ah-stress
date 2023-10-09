#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "abbhuabcfghh";
    string out = "";

    map<char, int> m;

    for (int i = 0; i < A.size(); i++){
        m[A[i]]++;
    }

    map<char, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    return 0;
}