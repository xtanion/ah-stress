#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A{3, 6, 8, 10, 15, 50};
    int B = 5;
    int pairs=0;

    unordered_map<int, int>mp;
    for(int i=0; i<A.size(); i++){
        int x = B^A[i];
        if(mp.find(x)!=mp.end()){
            pairs++;
        }

        mp[A[i]]=i;
    }

    cout<<pairs<<endl;
    return pairs;
}