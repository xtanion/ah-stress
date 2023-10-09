#include "../_template.h"

TreeNode* recurse(TreeNode* node, int ub, int lb){
        if(node==NULL) return NULL;

        // // cout << node->val <<endl;
        // if (node->val <= ub && node->val >= lb){
        //     // cout << "assigned value to ans: " << node->val <<endl;
        //     // ans = node;
        //     return node;
        // }
        cout << node->val << " "<< ub << " " << lb << endl;
        if(node->val <=ub && node->val >=lb){
            cout << "got it" <<endl;
            return node;
        }
        else if(node->val > ub) return recurse(node->left, ub, lb);
        else if(node->val < lb) return recurse(node->right, ub, lb);
        else{
            return NULL;
        }
}
int main(){
    vector<int> preord{2, 1};
    TreeNode *a = get_preorder(preord);
    TreeNode* p = new TreeNode(2);
    TreeNode* q = new TreeNode(1);
    TreeNode* ans = recurse(a, p->val, q->val);

    cout << ans->val <<endl;
}