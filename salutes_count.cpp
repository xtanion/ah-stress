#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = ">><<><";
    int count = 0, left=0, right=0;
    for (int i = 0; i < A.size(); i++)
    {
        char cur = A[i];
        if (cur == '<'){
            cout << "L " << left << endl;
            count += left;
        }else{
            left++;
        }
    }

    cout << count << endl;
}