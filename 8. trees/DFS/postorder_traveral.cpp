#include<bits/stdc++.h>
#include "../_template.h"
using namespace std;

void postorder_traversal(Node* node){
    // LEFT -> RIGHT -> ROOT 
    if (node == NULL) return;
    postorder_traversal(node->left);
    postorder_traversal(node->right);
    cout << node->value << " ";
}

int main(){
    Node* A = head;
    
    cout << "postorder: ";
    postorder_traversal(A);
    cout <<endl;
}