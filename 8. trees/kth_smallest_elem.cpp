#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

void traverse(Node* node, vector<int> &A){
    if(node==NULL) return;

    // cout << node->value << " ";
    A.push_back(node->value);
    traverse(node->left, A);
    traverse(node->right, A);
}

int main(){
    Node* node = head;
    int k=2;

    vector<int>A{};
    traverse(node, A);

    // for(int i=0; i<A.size(); i++){
    //     cout << A[i] <<endl;
    // }

    sort(A.begin(), A.end());
    cout << A[k-1] <<endl;
}