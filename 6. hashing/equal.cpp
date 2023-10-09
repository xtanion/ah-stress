#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A{1, 1, 1, 1};

    unordered_map<int, vector<int>> sums;
    int n = A.size();
    vector<vector<int>>ans;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = A[i]+A[j];
            
            if(sums.find(sum)==sums.end()){
                sums[sum].push_back(i);
                sums[sum].push_back(j);
            }else{
                set<int> s;
                s.insert(sums[sum][0]);
                s.insert(sums[sum][1]);
                s.insert(i);
                s.insert(j);

                if(s.size()==4){
                    ans.push_back({sums[sum][0], sums[sum][1], i, j});
                }
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans[0];

    return 0;
}