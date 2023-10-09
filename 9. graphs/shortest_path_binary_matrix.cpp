#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> grid{{0,1,0,1},{1,0,1,0},{1,1,0,0},{1,1,1,0}};

    int n=grid.size();
    pair<int, int>src{0,0};
    pair<int, int>target{n-1, n-1};

    vector<vector<int>>dist(n, vector<int>(n, INT_MAX));
    queue<pair<int, pair<int, int>>>q;

    dist[src.first][src.second]=0;
    q.push({0, src});
    
    vector<int>dx{1, 1, 0, -1, -1, -1, 0, 1};
    vector<int>dy{0, 1, 1, 1, 0, -1, -1, -1};
    
    while(!q.empty()){
        int d=q.front().first;
        int x=q.front().second.first;
        int y=q.front().second.second;
        q.pop();

        for(int i=0; i<8; i++){
            int tx=x+dx[i];
            int ty=y+dy[i];

            if(ty>=0 && tx>=0 && tx<n && ty<n &&
                grid[tx][ty]==0 && dist[tx][ty]>d+1){
                    dist[tx][ty]=d+1;
                    pair<int,int>c{tx, ty};
                    q.push({d+1, c});
                }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]==0){
                cout<< dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}