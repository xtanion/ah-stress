#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;

bool validate_braces(string A){
    // int i=start;
    stack<int> rec;
    int symbols = 0;
    int bpairs = 0;

    for(int i=0; i<A.size(); i++){
        if (A[i]=='+' || A[i]=='-' || A[i]=='*' || A[i]=='/'){
            symbols++;
        }

        if (A[i]=='(') {
            bpairs++;
        }
    }

    if(bpairs>symbols) return false;
    else
     return true;
}

bool is_valid(string A){
    
}

int main(){
    string A = "((a+b)+c)";
    stack<int> rec;

    cout << validate_braces(A) <<endl;
}