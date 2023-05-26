#include<bits/stdc++.h>
using namespace std;

int set_bits(int A){
    int cnt = 0;
    while (A>0){
        cnt += A & 1;
        A = A >> 1;
    }

    return cnt;
}
int main(){
    int A = 3;
    // cout << set_bits(3) << endl;
    for (int i = 0; )
}