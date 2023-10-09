#include "../_template.h"

TreeNode*first;
TreeNode*middle;
TreeNode*last;
TreeNode*prev;

void recurse(TreeNode* node){
    // basic inorder traversal
    if(node==NULL) return;

    recurse(node->left);
    if(prev!=NULL && root->val < prev->val){
        if(first==NULL){
            first=prev;
            middle=node;
        }else{
            last=node;
        }
    }
    prev = node;
    recurse(node->right);
}

int main(){
    vector<int> preord{8, 6, 5, 7, 10};
    TreeNode *root = get_preorder(preord);
    vector<int> iorder{};

    TreeNode*first;
    TreeNode*middle;
    TreeNode*last;
    TreeNode*prev;

    first = middle = last = NULL;
    prev = new TreeNode(INT_MIN);

    recurse(root);
    if(first&&last) swap(first->val, last->val);
    else if(first && middle) swap(first->val, middle->val);
}