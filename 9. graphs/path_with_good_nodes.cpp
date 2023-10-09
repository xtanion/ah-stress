#include<bits/stdc++.h>
using namespace std;

int recurse(int node, int target, vector<int>adj[], vector<int>&vis, vector<int>&A){
    target = target - A[node-1];
    if(adj[node].size()==1){
        cout << node << "-" << target << endl;
        if(target>=0) return 1;
        else return 0;
    }
    vis[node]=1;
    int count=0;
    for(int i=0; i<adj[node].size(); i++){
        int tnode = adj[node][i];
        if(vis[tnode]!=1){
            count += recurse(tnode, target, adj, vis, A);
        }
    }
    cout <<node << " "<< count << endl;
    return count;
}

int main(){
    vector<int>A{1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1 };
    vector<vector<int>>B{{10, 6},
                         {3, 2},
                         {12, 7},
                         {9, 5},
                         {2, 1},
                         {8, 3},
                         {7, 1},
                         {4, 2},
                         {6, 3},
                         {11, 4},
                         {5, 3},
                         {13, 11}};
    int C = 7;

    int n = A.size();
    vector<int>adj[n+1];
    vector<int>vis(n+1, 0);
    for(int i=0; i<B.size(); i++){
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    int ans = recurse(1, C, adj, vis, A);
    cout <<ans <<endl;
}