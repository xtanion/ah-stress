#include<bits/stdc++.h>
using namespace std;

string less_more(int A, int ten_pow){
    // 1<A<10
    int first;
    string rom = "";
    char o, f, t;
    vector<char> ten_base{'I', 'X', 'C', 'M'};
    vector<char> five_base{'V', 'L', 'D'};

    o = ten_base[ten_pow];
    f = five_base[ten_pow];
    t = ten_base[ten_pow + 1];

    switch (A)
    {
    case 1:
        rom += o;
        break;
    case 2:
        rom += o + o;
        
    default:
        break;
    }
}
int main(){
    int A = 144;
    string rom = "";
    map<int, char> base;
    base[1] = 'I';
    base[5] = 'V';
    base[10] = 'X';
    base[50] = 'L';
    base[100] = 'C';
    base[500] = 'D';
    base[1000] = 'M';

    // divide into 100s 50s 10s 5s and 1s


}