#include<bits/stdc++.h>
using namespace std;

int main(){
    int A = 8;
    int i = 0;
    while ((A >> i) > 0)
    {
        A = A ^ (1 << i);
        i++;
    }
    return A;
}