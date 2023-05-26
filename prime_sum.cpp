#include<bits/stdc++.h>
using namespace std;

vector<int> soolution(int A){
    vector<int> primes;
    vector<bool> isprime(A, true);
    // vector <int> current, next;
    int i, j;
    for (i = 2; i < A; i++)
    {
        if (isprime[i])
        {

            for (j = i * 2; j < A; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }

    for (i = 2; i < A; i++){
        if (isprime[i] && isprime[A-i]){
            primes.push_back(i);
            primes.push_back(A - i);
            break;
        }
    }
    return primes;
}

int main(){
    int A = 136;
    vector<int> output;
    output = soolution(A);
    for (int i = 0; i < output.size(); i++)
    {
        cout << "OUTPUT: " << output[i] << endl;
    }
}