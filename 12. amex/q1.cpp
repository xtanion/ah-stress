#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = ".B.B.B.B";
    vector<bool> pos;
    int n = 0, m = s.size(), sum=0;
    for (int i = 0; i < m; i++)
    {
        if(s[i]=='.')
            pos.push_back(0);
        else{
            n++;
            sum += i;
            pos.push_back(1);
        } 
    }

    int end = m - 2 * n + 1;
    if(end<0)
        return -1;

    int min_move = INT_MAX;

    for (int i = 0; i <= end; i++)
    {
        int move = 0;
        for (int j = i; j < i+(2*n)-1; j+=2)
        {
            if(pos[j]!=1)
                move += 1;
        }
        min_move = min(move, min_move);
    }

    cout << min_move << endl;
}