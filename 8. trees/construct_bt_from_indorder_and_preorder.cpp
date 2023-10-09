#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

TreeNode* buildTree(vector<int>& preorder, int prestart, int preend,
                    vector<int>& inorder, int instart, int inend,
                    map<int, int> inmap)
{
    if(prestart>preend || instart>inend) return NULL;
    TreeNode* root = new TreeNode(preorder[prestart]);
    int inroot = inmap[root->val];
    int numsleft = inroot - instart;

    root->left = buildTree(preorder, prestart+1, prestart+numsleft, inorder, instart, inroot-1, inmap);
    root->left = buildTree(preorder, prestart+numsleft+1, preend, inorder, inroot+1, inend, inmap);

    return root;
}

int main(){
    vector<int>inorder{40, 20, 50, 10, 60, 30}; // Left Root Right
    vector<int>preorder{10, 20, 40, 50, 30, 60}; // Root Left Right

    map<int, int> inmap;
    for(int i=0; i<inorder.size(); i++){
        inmap[inorder[i]] = i;
    }
    TreeNode* root = buildTree(preorder, 0, preorder.size()-1,
                               inorder, 0, inorder.size()-1, inmap);
    // return root;
}