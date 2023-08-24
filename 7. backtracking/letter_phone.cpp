#include<bits/stdc++.h>
using namespace std;

string assign_key(char key){
    switch (key){
        case '1':
            return "1";
            break;
        case '2':
            return "abc";
            break;
        case '3':
            return "def";
            break;
        case '4':
            return "ghi";
            break;
        case '5':
            return "jkl";
            break;
        case '6':
            return "mno";
            break;
        case '7':
            return "pqrs";
            break;
        case '8':
            return "tuv";
            break;
        case '9':
            return "wxyz";
            break;
        default:
            return "0";
    }
}

void permutation(vector<string>&A, vector<string>&out, string comb, int i){

    if(comb.size()==A.size()){
        out.push_back(comb);
        return;
    }

    for(int j=0; j<A[i].size(); j++){
        comb.push_back(A[i][j]);
        permutation(A, out, comb, i+1);
        comb.pop_back();
    }

    // permutation(A, out, comb, i+1);
}

int main(){
    string A = "234";

    vector<string> keys;
    vector<string> out;
    string comb = "";
    for(int i=0; i<A.size(); i++){
        string out = assign_key(A[i]);
        keys.push_back(out);
    }

    permutation(keys, out, comb, 0);

    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << endl;
    }
}