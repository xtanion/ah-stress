#include<bits/stdc++.h>
#include "../_template.h"

using namespace std;

int main(){
    Node* A = head; 
    queue<Node*> q;
    vector<vector<int>> ans;
    q.push(A);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            Node* node = q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            level.push_back(node->value);
        }

        ans.push_back(level);
    }

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout <<endl;
    }
}