#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A{1, 0, 0, 1, 0};

    int zeros=0;
    int ones=0;
    int max=0;
    unordered_map<int, int>mp;
    for(int i=0; i<A.size(); i++){
        if(A[i]==0){
            zeros++;
        }else{
            ones++;
            if(ones==zeros+1){
                max=i;
            }
        }
    }
}