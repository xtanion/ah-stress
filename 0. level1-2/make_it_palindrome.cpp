#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "abcbae";

    int m = A.size();
    int cnt = 0;
    for (int i = 0; i <= m / 2; i++)
    {
        cout << A[i] << A[m -i - 1] << endl;
        if (A[i] != A[m - i - 1])
        {
            cnt++;
        }
    }

    if(cnt>1){
        return 0;
    }
    cout << "possible" << endl;
    return 1;
}