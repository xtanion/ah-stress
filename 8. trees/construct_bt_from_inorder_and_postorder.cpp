#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

TreeNode* recurse(vector<int>& postorder, int lb, int ub, int& idx, map<int, int>&imap){
    if (lb>ub || idx<0) return NULL;
    TreeNode* root = new TreeNode(postorder[idx--]);
    cout <<"root: "<<root->val << "index: "<<idx <<endl;
    int mid = imap[root->val];
    root->left = recurse(postorder, lb, mid-1, idx, imap);
    root->right = recurse(postorder, mid+1, ub, idx, imap);
    return root;
}

int main(){
    vector<int>inorder{9,3,15,20,7};
    vector<int>postorder{9,15,7,20,3};

    map<int, int>imap;
    for(int i=0; i<inorder.size(); i++) imap[inorder[i]] = i;

    int n = postorder.size();
    int index = n-1;
    cout << "index: " <<index <<endl;
    TreeNode* root = recurse(postorder, 0, n-1, index, imap);
}