#include<bits/stdc++.h>
using namespace std;

void solve(vector<string> &A,vector<string> &ans,string output,int index){
    // Base Case
    if(index>=A.size()){
        ans.push_back(output);
        return;
    }
    string chars = A[index];
    for(int i=0;i<chars.size();i++){
        output.push_back(chars[i]);
        solve(A,ans,output,index+1);
        output.pop_back();
    }
}


int main(){
    vector<string> A{"ab", "cd", "pq"};
    vector<string> ans;
    string output="";
    int index=0;
    solve(A,ans,output,index);
    sort(ans.begin(),ans.end());
    return ans;
}
