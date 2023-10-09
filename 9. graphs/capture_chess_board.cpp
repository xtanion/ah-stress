#include<bits/stdc++.h>
using namespace std;

char modify(int x, int y, vector<vector<int>>&vis, vector<vector<char>>&A){
    if(x==0 || x==A.size()-1 || y==0 || y==A[0].size()-1){
        A[x][y]='O';
        return 'O';
    }
    
    vector<int>dx{1, 0, -1, 0};
    vector<int>dy{0, 1, 0, -1};
    char replace = 'X';
    vis[x][y] = 1;
    for (int i=0; i<4; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        
        if(ty>=0 && tx>=0 && tx<A.size() && ty<A[0].size() && vis[tx][ty]==-1 && A[tx][ty]=='O'){
            char t = modify(tx, ty, vis, A);
            if(t=='O'){
                replace = t;
                break;
            }
        }
    }
    A[x][y] = replace;
    return replace;
}

int main(){
    vector<vector<char>> A = {{'X', 'X', 'X'},
                              {'X', 'O', 'X'},
                              {'X', 'X', 'X'}};
    
    int n = A.size(), m = A[0].size();
    vector<vector<int>> vis(n, vector<int>(m, -1));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j]=='O' && vis[i][j]!=1){

                char ans = modify(i, j, vis, A);
            } 
        }
    }
    for(auto it1: A){
        for(auto it2: it1){
            cout << it2 << " ";
        }
        cout << endl;
    }
}