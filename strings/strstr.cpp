#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "bbaabbbbbaabbaabbbbbbabbbabaabbbabbabbbbababbbabbabaaababbbaabaaaba";
    string B = "babaaa";

    int start = 0, end, current=0;
    for (int i = 0; i <= A.size(); i++){
        // cout << i << "\n";
        if (current >= B.size())
        {
            cout << start - B.size() + 1 <<endl;
            return start - B.size() + 1;
        }
        if(A[i]==B[current]){
            cout <<i<< " matches" << endl;
            start = i;
            current++;
        }else{
            cout <<i<< " breaks" << endl;
            i = i - current ;
            current = 0;
        }
    }
    // cout << start - B.size() +1<< endl;

    return -1;
}