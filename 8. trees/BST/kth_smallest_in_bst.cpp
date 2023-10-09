#include "../_template.h"

void inorder(TreeNode* node, int k, int& count, int& ans){
    if(node==NULL) return;

    inorder(node->left, k, count, ans);
    count++;
    if(count==k) ans=node->val;
    inorder(node->right, k, count, ans);
}

int main(){
    vector<int> preord{8, 6, 5, 7, 10};
    TreeNode *a = get_preorder(preord);
    int count=0, ans;
    inorder(a, 3, count, ans);
    cout << ans <<endl;
}