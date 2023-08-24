#include<bits/stdc++.h>
#include "../_template.h"
using namespace std;

void recurse(TreeNode* node, vector<int> & inorder){
    if(node==NULL) return;

    recurse(node->left, inorder);
    inorder.push_back(node->val);
    recurse(node->right, inorder);
}

int main(){
    vector<int> preord{8, 6, 5, 7, 10};
    TreeNode *root = get_preorder(preord);
    int k = 18;

    vector<int> inorder{};
    recurse(root, inorder);

    int i=0, j=inorder.size()-1;
    while(i<j){
        int sum = inorder[i]+inorder[j];
        if(sum<k)i++;
        else if(sum>k) j--;
        else{
            cout << "found" <<endl;
            return 1;
        };
    }
    return 0;
}