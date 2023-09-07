#include<bits/stdc++.h>
using namespace std;


bool validate(int node, vector<vector<int>>&graph, vector<char>&vis, char side){
    cout << node << side << vis[node]<<endl;
    if(side==vis[node]) return true;
    if(vis[node]!='X' && side!=vis[node]) return false;
    
    vis[node]=side;
    side = side=='L'?'R':'L';

    bool prev=true, cur;
    for(auto it: graph[node]){
        // cout << node << " it: " <<it<<endl;
        cur = validate(it, graph, vis, side);
        prev = cur & prev;
    }
    return prev;
}

int main(){
    // vector<vector<int>>graph{{1,2,3},{0,2},{0,1,3},{0,2}};
    vector<vector<int>>graph{{1,3},{0,2},{1,3},{0,2}};

    // vector<bool>visited;
    int m=graph.size();
    vector<char>vis(m, 'X'); // 'L' or 'R' or 'X'
    // for(auto it:vis) cout << it << endl;
    bool prev=true, cur;
    for(int i=0; i<m; i++){
        if(vis[i]=='X'){
            cur = validate(i, graph, vis, 'L');
            prev=cur&prev;
        } 
    }

    cout << prev <<endl;
}