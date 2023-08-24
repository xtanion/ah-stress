#include<bits/stdc++.h>
#include "../_template.h"
using namespace std;

void inorder_traversal(Node* node){
    // LEFT -> ROOT -> RIGHT
    if (node == NULL) return;
    inorder_traversal(node->left);
    cout << node->value << " ";
    inorder_traversal(node->right);
}

int main(){
    Node* A = head;
    
    cout << "inorder: ";
    inorder_traversal(A);
    cout <<endl;
}