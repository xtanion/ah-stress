#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

int height(Node* node, bool& valid){
    if (node==NULL) return 0;

    int lh = height(node->left, valid);
    int rh = height(node->right, valid);

    if(lh>rh+1 || rh>lh+1){
        valid = false;
    }

    return 1+max(lh, rh);
}

int main(){
    Node* one = new Node(5);
    Node* two = new Node(1);
    Node* thr = new Node(3);
    Node* fou = new Node(1);
    Node* fiv = new Node(4);
    Node* six = new Node(6);


    one->left = two;
    one->right = thr;
    two->right = fou;
    thr->left = fiv;
    // thr->left = fou;
    // thr->right = fiv;

    Node* node = one;
    
    bool valid=true;
    height(node, valid);

    cout<< "valid: " << int(valid) <<endl;
}