#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "267710100101018 U 0 T7165 0128862 089 39 5";
    int out;
    string B = "";
    // char in[A.size()];

    for (int i = 0; i < A.size(); i++){
        if (B.size()==0){
            if(A[i]=='+' || A[i]=='-'){
                B += A[i];
                continue;
            }
        }
        if(isdigit(A[i])){
            B += A[i];
            // cout << A[i] << endl;
            // in[i] = A[i];
        }else{
            // in[i] = '\0';
            break;
        }
    }

    // cout << B << endl;
    char in[B.size()+1];
    strcpy(in, B.c_str());

    // cout << in << endl;
    if(B.size()>=10 && (B>to_string(INT_MAX))
    out = atoi(in);
    cout << out << endl;
    return out;
}