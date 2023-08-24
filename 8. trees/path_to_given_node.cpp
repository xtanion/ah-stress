#include<bits/stdc++.h>
#include "_template.h"
using namespace std;


bool recurse(Node* node, int target, vector<int>& out){
    if(node==NULL) return false;
    if(node->value==target){
        out.push_back(node->value);
        return true;
    }
    bool lr = recurse(node->left, target, out);
    bool rr = recurse(node->right, target, out);

    if(lr || rr) {
        out.push_back(node->value);
    }
    return lr || rr;
}

int main(){
    Node* node = head;
    int B = 11;

    vector<int> out{};

    recurse(head, B, out);

    reverse(out.begin(), out.end());
    for(int i=0; i<out.size(); i++){
        cout << out[i] <<endl;
    }
}