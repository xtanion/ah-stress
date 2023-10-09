#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

void inorder_traversal(Node* node){
    // LEFT -> ROOT -> RIGHT
    if (node == NULL) return;
    inorder_traversal(node->left);
    cout << node->value << " ";
    inorder_traversal(node->right);
}

void recurse(Node* node, Node* prev, bool isleft){
    if(node==NULL) return;

    recurse(node->left, node, true);
    recurse(node->right, node, false);
    
    if(node->left==NULL ^ node->right==NULL){
        if(node->left==NULL){
            if(isleft) prev->left = node->right;
            else prev->right = node->right;
        }else{
           if(isleft) prev->left = node->left;
           else prev->right = node->left; 
        }
    }

    
}

int main(){
    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* thr = new Node(3);
    Node* fou = new Node(4);
    Node* fiv = new Node(5);
    Node* six = new Node(6);

    one->left = two;
    one->right = thr;
    // two->left = fou;
    // two->right = fiv;
    thr->left = fou;
    fou->right = fiv;

    Node* node = one;

    recurse(node, NULL, true);
    inorder_traversal(node);
    cout <<endl;
}