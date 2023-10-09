#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

void recurse(Node* node, Node* prev, int& count){
    if(node==NULL) return;

    if (prev!=NULL){
        cout << prev->value << " " << node->value <<endl;
        if(node->value==prev->value+1 || node->value==prev->value-1) {
            count++;
            // cout << count <<endl;
        }
    }
    recurse(node->left, node, count);
    recurse(node->right, node, count);
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
    thr->left = fou;
    thr->right = fiv;

    Node* node = one;
    int count = 0;
    recurse(node, NULL, count);
    cout << count <<endl;
}