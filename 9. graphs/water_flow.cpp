#include<bits/stdc++.h>
using namespace std;

void traverse(int i, int j, vector<vector<int>>&vis, vector<vector<int>>&A){
    // cout <<"i: "<< i<< j<< endl;
    // if(i<0 || j<0 || i>=A.size() || j>=A[0].size()) return;
    if(vis[i][j]==1) return;
    cout << i<< j<< endl;
    vector<int>tx{1, 0, -1, 0};
    vector<int>ty{0, 1, 0, -1};
    vis[i][j] = 1;
    
    for(int t=0; t<4; t++){
        int x = i+tx[t];
        int y = j+ty[t];
        if(x>=0 && x<A.size() && y>=0 && y<A[0].size() &&
            A[i][j] <= A[x][y]){
            traverse(x, y, vis, A);
        }
    }
}

int main(){
    vector<vector<int>>A{{1, 2, 2, 3, 5},
                         {3, 2, 3, 4, 4},
                         {2, 4, 5, 3, 1},
                         {6, 7, 1, 4, 5},
                         {5, 1, 1, 2, 4}};
    int n = A.size(), m = A[0].size();
    vector<vector<int>>vis1(n, vector<int>(m, 0));  
    vector<vector<int>>vis2(n, vector<int>(m, 0));
    for(int i=0; i<n; i++){
        cout << "top" <<endl;
        traverse(i, 0, vis1, A);
        cout << "bottom" << endl;
        traverse(i, m-1, vis2, A);
    }
    for(int j=0; j<m; j++){
        traverse(0, j, vis1, A);
        traverse(n-1, 0, vis2, A);
    }
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (vis1[i][j]==1 && vis2[i][j]==1) count++;
        }
    }
    cout << "count: " << count <<endl;
    return count;
}