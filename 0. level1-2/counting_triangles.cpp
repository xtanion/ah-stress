#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A = {1,1,1,2,2};
    int n = A.size(), ctr = 0;
    const int M = 1e9 + 7;
    sort(A.begin(), A.end());

    for(int i=n-1; i>=2; i--){
        int l = 0, r = i-1; 
        while(l < r){
            int sum = A[l] + A[r];
            if(sum > A[i]){
                ctr = (ctr % M) + ((r-l)%M);
                r--;
            }
            else l++;
        }
    }

    // return ctr;
    cout << ctr <<endl;
}