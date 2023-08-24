#include<bits/stdc++.h>
#include "_template.h"

using namespace std;

int get_height(Node* node){
    if(node == NULL) return 0;

    int left = get_height(node->left);
    int right = get_height(node->right);
    return 1+max(left, right);
}

int main(){
    Node *A = head;
    cout << "Height: " << get_height(A) << endl;
}