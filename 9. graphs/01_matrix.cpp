#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>>mat {{0,0,0},{0,1,0},{1, 1, 1}};
    
    
    int m=mat.size(), n=mat[0].size();
    vector<vector<int>>ans(m, vector<int>(n, 0));
    int vis[m][n];
    cout << "d1" <<endl;
    queue<pair<pair<int,int>,int>> q;
    cout << "d2"<<endl;

    cout << " start "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]==0){
                vis[i][j]=1;
                q.push({{i, j}, 0});
            }else{
                vis[i][j]=0;
            }
        }
    }

    cout << "end" <<endl;
    

    int drow[] = {-1, 0, +1, 0};
    int dcol[] = {0, 1, 0, -1};

    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int count = q.front().second;
        ans[r][c]=count;
        
        q.pop();
        for(int i=0; i<4; i++){
            int nrow = r+drow[i];
            int ncol = c+dcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                vis[nrow][ncol]==0){
                q.push({{nrow, ncol}, count+1});
                vis[nrow][ncol]=1;
            }
        }

    }

    for(auto it: ans){
        for(auto it2: it){
            cout << it2 << " ";
        }
        cout <<endl;
    }

}