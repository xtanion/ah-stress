#include<bits/stdc++.h>
#include "_template.h"
using namespace std;


void traverse(TreeNode* a, TreeNode* b, bool &result){
    if (a==NULL && b!=NULL)
    {
        result = false;
        return;
    }
    else if(a!=NULL && b==NULL){
        result = false;
        return;
    }
    else if(a==NULL && b==NULL){
        return;
    }

    if (a->val != b->val)
    {
        result = false;
    }
    traverse(a->left, b->left, result);
    traverse(a->right, b->right, result);
}

int main(){
    vector<int> preord{8, 5, 1, 7, 10, 12};
    vector<int> preord2{8, 5, 1, 7, 10, 13};
    TreeNode *a = get_preorder(preord);
    TreeNode *b = get_preorder(preord2);

    bool result=true;
    traverse(a, b, result);
    cout << result << endl;
}