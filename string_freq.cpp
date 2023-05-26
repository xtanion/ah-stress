#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "abbhuabcfghh";
    string B, out="";
    char start;
    B = A;
    sort(B.begin(), B.end());
    map<char, int> counts;
    int cnt=1, i;

    start = B[0];
    for (i = 1; i < B.size(); i++)
    {
        
        if (B[i] == start)
        {
            cnt++;
        }
        else
        {
            counts.insert(pair(start, cnt));
            cnt = 1;
            start = B[i];
        }
    }
    counts.insert(pair(start, cnt));

    for (i = 0; i < A.size(); i++){
        if(counts.find(A[i])!=counts.end()){
            out = out + A[i] + to_string(counts[A[i]]);
            counts.erase(A[i]);
        }
    }

    cout << out << endl;
    return 0;
}