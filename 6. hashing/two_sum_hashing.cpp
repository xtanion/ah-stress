#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A{2, 7, 8, 9, 10};
    int B = 9;

    vector<int>out;
    unordered_map<int, int>mp;
    for(int i=0; i<A.size(); i++){
        int diff = B - A[i];
        if(mp.find(diff)!=mp.end()){
            out.push_back(mp[diff]);
            out.push_back(i);
            // return out;
        }
        
        if(mp.find(A[i])==mp.end()){
            mp[A[i]]=i;
        }
    }

    cout << out[0] <<endl;
    cout << out[1] <<endl;

    return 0;
}