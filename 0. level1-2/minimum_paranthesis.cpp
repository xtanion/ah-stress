#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "())()()()))())())";
    int open = 0, total=0;
    // bool opened = false;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '(')
        {
            open++;
            total++;
        }
        else
        {
            if(open>0){
                open--;
                total--;
            }else{
                total++;
            }
        }

        // cout <<open
    }

    cout << total << endl;
}