#include<bits/stdc++.h>
using namespace std;

int main(){
    int A = 23;
    vector<int>prods;
    string s=to_string(A);
    int n=s.length();
    if(n==1) return 1;
    for(int i=0;i<n;i++)
    {
        long long prod=1;
        for(int j=i;j<n;j++)
        {
            prod*=(long long)(s[j]-'0');
            prods.push_back(prod);
        }
    }

    sort(prods.begin(), prods.end());
    return 1;
}