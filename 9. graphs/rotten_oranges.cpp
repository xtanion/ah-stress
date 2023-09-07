#include<bits/stdc++.h>
using namespace std;


vector<int> makeadj(vector<vector<int>>&grid, int i, int j, int m, int n){
    vector<int>tmp{};
    if(i+1<m){
        if(grid[i+1][j]==1 || grid[i+1][j]==2) tmp.push_back((i+1)*m+j); 
    }
    if(i-1>=0){
        if(grid[i-1][j]==1 || grid[i-1][j]==2) tmp.push_back((i-1)*m+j);
    }
    if(j-1>=0){
        if(grid[i][j-1]==1 || grid[i][j-1]==2) tmp.push_back(i*m+(j-1));
    }
    if(j+1<n){
        if(grid[i][j+1]==1 || grid[i][j+1]==2) tmp.push_back(i*m+(j+1));
    }
    
    return tmp;
}

int main(){
    // vector<vector<int>> grid{{2,1,1}, {1,1,0}, {0,1,1}};
    vector<vector<int>> grid{{1}, {2}};
    cout << "failed" <<endl;
    int m = grid.size();
    int n = grid[0].size();

    cout << m <<n <<endl;
    
    vector<int>adj[m*n+1];
    queue<pair<int, int>>q;
    bool visited[m*n+1]={0};
    int actual=0;

    cout << "fails 2" <<endl;

    

    for(int i=0; i<m; i++){
        vector<int>tmp{};
        for(int j=0; j<n; j++){
            cout << i <<j <<endl;
            adj[i*m+j] = makeadj(grid, i, j, m, n);
            if(grid[i][j]==2){
                q.push({i*m+j, 0});
                visited[i*m+j]=true;
            }
            if(grid[i][j]!=0){
                actual++;
            }
        }
    }
    cout << "fails 2" <<endl;
    
    int minutes;
    while(!q.empty()){
        int node = q.front().first;
        minutes = q.front().second;
        q.pop();
        for(auto it: adj[node]){  
            if(!visited[it]){
                // change = true;
                visited[it]=true;
                q.push({it, minutes+1});
            }
        }
    }

    int count=0;
    for(auto it:visited){
        if(it==1) count++;
    }
    cout << "ans: " << minutes <<endl;
    if(count!=actual) return -1;
    else return minutes;
    
}