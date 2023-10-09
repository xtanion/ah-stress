#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A = "abac";
    int v = 0, c = 0;
    int m = 1000000007;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            v++;
            v = v % m;
        }
        else
        {
            c++;
            v = v % m;
        }
    }
    cout << v * c << endl;
    return v * c;
}