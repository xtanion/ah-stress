#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "the  sky is     blue      ";
    string B = "", word="";
    char space = ' ';
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == ' ')
        {
            if(!word.empty()){
                B = " " + word + B;
                word.clear();
            }
        }
        else
        {
            word += A[i];
        }
    }

    if (!word.empty()){
        B = " " + word + B;
    }

    B.erase(B.begin());
    cout << B << endl;
    return 0;
}