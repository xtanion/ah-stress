#include<bits/stdc++.h>
#include "_template.h"

using namespace std;

int sum(TreeNode* node){
    if(node==NULL)
        return 0;
    int left = sum(node->left);
    int right = sum(node->right);
    return node->val + left + right;
}
int main(){
    vector<int> preord{8, 5, 1, 7, 10, 13};
    TreeNode *a = get_preorder(preord);
    int total = sum(a);
    cout << total << endl;
}