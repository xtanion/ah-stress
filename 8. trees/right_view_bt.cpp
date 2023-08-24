#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

int main(){
    //  Approach: level order traversal and take the right most node if exists, else next node.
    vector<int> preord{1, 2};
    TreeNode *a = get_preorder(preord);

    vector<int>out{};
    queue<TreeNode*> q;
    q.push(a);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            level.push_back(node->val);
        }

        out.push_back(level[level.size()-1]);
    }
    for(int i=0; i<out.size(); i++){
        cout << out[i] <<endl;
    }
}