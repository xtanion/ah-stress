#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "aabbcdeefff";
    int B = 2;
    char prev = A[0];
    int count = 1;
    string out = "";
    for (int i = 1; i < A.size(); i++)
    {
        if (prev == A[i])
        {
            count++;
        }
        else
        {
            if (count != B)
            {
                cout << i << endl;
                for (int j = 0; j < count; j++){
                    out += A[i - j-1];
                }
            }
            count = 1;
            prev = A[i];
        }
    }

    if(count!=B){
        for (int j = 0; j < count; j++)
        {
            out += A.back();
        }
    }

    cout<< out <<endl;
    return 0;
}