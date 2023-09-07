#include<bits/stdc++.h>
using namespace std;

void recurse(vector<vector<char>>&ans, vector<vector<int>>&visited, int r, int c){
    if(r<0 || r>=ans.size() || c<0 || c>=ans[0].size() || visited[r][c]!=0) return;
    // cout << r <<c << ans[r][c]<<endl;
    if(!visited[r][c]) {
        ans[r][c]='O';
        visited[r][c]=1;
    }
    recurse(ans, visited, r+1, c);
    recurse(ans, visited, r-1, c);
    recurse(ans, visited, r, c+1);
    recurse(ans, visited, r, c-1);
    
}

int main(){
    vector<vector<char>>board{{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','O','X'}};

    int m=board.size(), n=board[0].size();
    queue<pair<int, int>>q;
    vector<vector<int>>visited(m, vector<int>(n, 0));

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if (board[i][j]=='O'){
                if (i==0 || i==m-1 || j==0 || j==n-1) q.push({i, j});
                else board[i][j]='X';
            }else{
                // all 'x' are already visited
                visited[i][j]=1;
            }
        }
    }

    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        recurse(board, visited, r, c);
    }

    for(auto it: board){
        for(auto it2: it){
            cout << it2 << " ";
        }
        cout <<endl;
    }
}