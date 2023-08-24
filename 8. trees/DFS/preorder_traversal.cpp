#include<bits/stdc++.h>
#include "../_template.h"
using namespace std;

void preorder_traversal(Node* node){
    // ROOT -> LEFT -> RIGHT
    if (node == NULL) return;
    cout << node->value << " ";
    preorder_traversal(node->left);
    preorder_traversal(node->right);
}

int main(){
    Node* A = head;
    
    cout << "preorder: ";
    preorder_traversal(A);
    cout <<endl;
}