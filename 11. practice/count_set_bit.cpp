#include<bits/stdc++.h>
using namespace std;

int countSetBits(int N)
{
    //Write your code here
    int count = 0;
    for(int i=0; i<32; i++){
        if(N&1){
            cout << "yes" <<endl;
            count++;
        }
        N = N>>1;

    }
    return count;
}

int main(){
    int n=7;
    cout << countSetBits(n) <<endl;
}