#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

int* traverse(Node* node){
    if(node==NULL) return 0;

    int lh = traverse(node->left);
    int rh = traverse(node->right);
    return 1+ max(lh, rh);
}

int solution(Node* node){

    int lh = traverse(node->left);
    int rh = traverse(node->right);

    if(lh>rh) return solution(node->left);
    return solution(node->right);
}

itn main(){
    Node* node = head;
    return solution(node);
}