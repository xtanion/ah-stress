#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "A man; A plan; A canal";
    string B = "";
    int n = A.size();

    for (int i = 0; i < n; i++){
        if(isalpha(A[i]) || isdigit(A[i])){
            B += tolower(A[i]);
        }
    }

    cout << B << endl;
    for (int i = 0; i < B.size()/2; i++){
        if(B[i]!=B[B.size()-1-i]){
            return 0;
        }
    }
    return 1;
}