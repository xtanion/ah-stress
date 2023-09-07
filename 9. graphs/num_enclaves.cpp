#include<bits/stdc++.h>
using namespace std;

void recurse(vector<vector<int>>&grid, vector<vector<int>>&visited, int r, int c, int& count){
    if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || visited[r][c]!=0) return;
    if(!visited[r][c]) {
        count--;
        visited[r][c]=1;
    }
    recurse(grid, visited, r+1, c, count);
    recurse(grid, visited, r-1, c, count);
    recurse(grid, visited, r, c+1, count);
    recurse(grid, visited, r, c-1, count);
    
}

int main(){
    vector<vector<int>>grid{{0,1,1,0},{0,0,1,0},{0,1,1,0},{0,0,0,0}};
    
    int m=grid.size(), n=grid[0].size();
    vector<vector<int>>vis(m, vector<int>(n, 0));
    queue<pair<int, int>>q;

    int ones=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            if(grid[i][j]==1){
                ones++;
                if(i==m-1 || i==0 || j==n-1 || j==0) q.push({i, j});
            }else{
                vis[i][j]=1;
            }
        }
    }

    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        recurse(grid, vis, r, c, ones);
    }

    cout << ones <<endl;
    return ones;
}