#include<bits/stdc++.h>
using namespace std;

bool loopcheck(int node, vector<int>adj[], vector<int>&vis){
    
    vis[node]=2;
    for(auto it:adj[node]){
        if(vis[it]==0){
            if(loopcheck(it, adj, vis)==true) return true;
        }
        else if(vis[it]==2) return true;
    }
    vis[node]=1;
    return false;
}

int main(){
    int numCourses=5;
    vector<vector<int>>prerequisites{{1,4}, {2,4}, {3,1}, {3,2}};

    vector<int>vis(numCourses, 0);
    vector<int>adj[numCourses];

    // creating the graph;
    for(auto it: prerequisites){
        adj[it[0]].push_back(it[1]);
    }

    for(int i=0; i<numCourses; i++){
        if(vis[i]==0){
            if(loopcheck(i, adj, vis)) return false;
        }
    }

    return true;
}