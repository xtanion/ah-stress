#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>heights{{1,2,1,1,1},{1,2,1,2,1},{1,2,1,2,1},{1,2,1,2,1},{1,1,1,2,1}};
    
    int n=heights.size(), m=heights[0].size();
    vector<vector<int>>dis(n, vector<int>(m,INT_MAX));
    queue<vector<int>>q; // (diff, x, y)
    
    q.push({0,0,0});
    dis[0][0]=0;

    while(!q.empty()){
        int d=q.front()[0];
        int x=q.front()[1];
        int y=q.front()[2];

        q.pop();
        cout <<x <<y <<": "<<d<<endl;
        if(x==n-1 && y==m-1){
            cout<< "ans: " <<d<<endl;
            return d;
        }

        vector<int>dx{1, 0, -1, 0};
        vector<int>dy{0, 1, 0, -1};

        for(int i=0; i<4; i++){
            int tx=x+dx[i];
            int ty=y+dy[i];

            if(ty>=0 && tx>=0 && tx<n && ty<n){
                    int newdiff = max(abs(heights[x][y]-heights[tx][ty]), d);
                    if(newdiff < dis[tx][ty]){
                        dis[tx][ty] = newdiff;
                        q.push({newdiff, tx, ty});
                    }
            }
        }
    }

}