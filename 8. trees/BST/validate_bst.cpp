#include "../_template.h"

void validate(TreeNode* node, long ub, long lb, bool& ans){
    if(node==NULL) return;

    if(node->val >ub || node->val < lb) ans=false;

    validate(node->left, node->val, lb, ans);
    validate(node->right, ub, node->val, ans);
}

int main(){
    vector<int> preord{8, 6, 5, 7, 10};
    // TreeNode *a = get_preorder(preord);
    TreeNode *a = get_preorder(preord);
    TreeNode*b = new TreeNode(2147483647);

    bool ans = true;
    cout << INT_MAX << " " << INT_MIN <<endl;
    validate(a, LONG_MAX, LONG_MIN, ans);
    cout << ans <<endl;
}