#include <bits/stdc++.h>
using namespace std;

vector<int> prime(int num){
    vector<bool> isprime(num-2, true);
    vector<int> B;

    for (int i = 2; i <= num; i++){
        if (isprime[i]){
            B.push_back(i);

            for (int j = 2 * i; j <= num; j=j+i){
                isprime[j] = false;
            }
        }
    }

    return B;
}

int main(){
    int num = 20, i;
    vector<int> out;

    out = prime(num);
    for (i = 0; i < out.size(); i++){
        cout << out[i] << " ";
    }
    cout << endl;
}