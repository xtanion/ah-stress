#include<bits/stdc++.h>
using namespace std;

int main(){
    string A="abab";

    int n = A.size();
    unordered_map<char, int>mp;

    for(int i=0; i<n; i++){
        if(mp.find(A[i])==mp.end()){
            mp[A[i]] = 1;
        }else{
            mp[A[i]] +=1;
        }
    }

    int odds=0;
    for(auto it:mp){
        if(it.second%2!=0) odds++;
    }

    if(n%2==0 && odds==0){
        cout<<"yes"<<endl;
        return 1;
    }
    if(n%2!=0 && odds==1){
        cout<<"yes"<<endl;
        return 1;
    }

    cout<<"no"<<endl;
    return 0;
}