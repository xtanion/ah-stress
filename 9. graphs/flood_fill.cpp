#include<bits/stdc++.h>
using namespace std;

int main(){
    // gottta do bfs traversal in 4 directions only;

    vector<vector<int>> image{{1,1,1}, {1,1,0}, {1,0,1}};

    vector<vector<int>> copy = image;
    int sr=1, sc=1;
    int color=2;

    int n=copy.size(), m=copy[0].size();
    // if(image[sr][sc]==color) return image;
    
    vector<int> t(0, m);
    int vis[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            vis[i][j]=0;
        }
    }
    

    queue<pair<int,int>>q;
    q.push({sr,sc});
    vis[sr][sc]=1;

    int drow[] = {-1, 0, +1, 0};
    int dcol[] = {0, 1, 0, -1};

    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();

        int cur = copy[r][c];
        copy[r][c]=color;
        vis[r][c]=1;

        for(int i=0; i<4; i++){
            int nrow = r+drow[i];
            int ncol = c+dcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && copy[nrow][ncol]==cur &&
               vis[nrow][ncol]==0){
                q.push({nrow, ncol});
                vis[nrow][ncol]=1;
            }
        }
    }

    for(auto it:copy){
        for(auto it2:it) cout << it2 << " ";
        cout << endl;
    }
}