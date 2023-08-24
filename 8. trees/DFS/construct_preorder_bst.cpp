#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value){
        val = value;
        left=right=NULL;
    }
};

TreeNode* create_tree(vector<int>&A, int& i, int ub){
    if(i==A.size() || A[i]>ub) return NULL;

    TreeNode* root = new TreeNode(A[i++]);
    root->left = create_tree(A, i, root->val);
    root->right = create_tree(A, i, ub);
    return root;
}

int main(){
    vector<int> A{8, 5, 1, 7, 10, 12};

    TreeNode* head = create_tree(A, 0, INT_MAX);

}