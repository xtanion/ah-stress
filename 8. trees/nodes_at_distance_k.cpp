#include<bits/stdc++.h>
#include "_template.h"
using namespace std;


void traverse(Node* node, int target, int d, int k, vector<int>& out){
    if(node==NULL) return;

    if(node->value==target){
        d=0;
    }

    if(target+d==0) out.push_back(node->value);
}


int main(){
    Node* node = head;
    int B=5;
    int C=2;

    vector<int>out{};
    traverse(node, B, 0, C, out, false);
}