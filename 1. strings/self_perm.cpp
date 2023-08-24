#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "scaler";
    string B = "relasc";

    if(A.size()==B.size()){
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        int x = A.compare(B);
        if (x == 0)
        {
            // cout << "possible" <<endl;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}