#include<bits/stdc++.h>
using namespace std;

int main(){
    int A = 15, B = 15;
    int cnt = 0;
    while(B>1){
        B = B>> 1;
        cnt++;
        cout << B << endl;
    }

    for (int i = 1; i < cnt; i++)
    {
        A = A >> 1;
    }

    cout << A << " "<< cnt << endl;
}