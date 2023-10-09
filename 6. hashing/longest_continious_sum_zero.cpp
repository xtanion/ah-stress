#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A{1,2,-2,4,-4};

    map<int,int>mp;
    mp[0]=-1;
    int sum=0;
    int length=0;
    vector<int>v;
    int x=0,y=0;
    for (int i=0;i<A.size();i++){
        sum=sum+A[i];
        if (mp.find(sum)!=mp.end()){
            if (i-mp[sum]>length){
                length=i-mp[sum];
                x=mp[sum];
                y=i;
            }
           
        }
        else mp[sum]=i;
        //sum=sum+A[i];
    }
    vector<int> ans;
    for(int i=x+1;i<=y;i++){
        ans.push_back(A[i]);
    }
    return ans;
}