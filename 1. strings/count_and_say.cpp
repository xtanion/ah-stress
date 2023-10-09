#include<bits/stdc++.h>
using namespace std;

int main(){
    int A = 2;
    string out = "1", temp;
    char prev;
    int cnt;
    
    if(A<2){
        return out;
    }

    for (int i = 2; i <= A; i++)
    {
        temp = "";
        prev = out[0];
        cnt = 1;
        for (int j = 1; j < out.size(); j++)
        {
            if (prev == out[j])
            {
                cnt++;
            }
            else
            {
                temp = temp+to_string(cnt)+prev;
                cnt = 1;
                prev = out[j];
            }
        }
        temp = temp + to_string(cnt) + prev;
        out = temp;
    }

    cout << temp <<endl;
    return 0;
}