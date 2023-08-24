#include<bits/stdc++.h>
#include "_template.h"

using namespace std;

void flatten(TreeNode* node, TreeNode* prev){
    if(node==NULL) return;

    flatten(node->right, prev);
    flatten(node->left, prev);
    node->right = prev;
    node->left = NULL;
    prev = node;
    // cout << prev->val <<endl;
}

int main(){
    vector<int> preord{8, 5, 1, 7, 10, 13};
    TreeNode *a = get_preorder(preord);
    flatten(a, NULL);

    while(a!=NULL){
        cout << a->val <<endl;
        a = a->right;
    }
}