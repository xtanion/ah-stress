#include<bits/stdc++.h>
using namespace std;


struct Node{
    int value;
    Node* left;
    Node* right;

    Node(int val){
        value = val;
        left = right = NULL;
    }
};

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value){
        val = value;
        left=right=NULL;
    }
};

TreeNode* create_tree(vector<int>&A, int& i, int ub){
    // creates bst
    if(i==A.size() || A[i]>ub) return NULL;

    TreeNode* root = new TreeNode(A[i++]);
    root->left = create_tree(A, i, root->val);
    root->right = create_tree(A, i, ub);
    return root;
}

TreeNode* get_preorder(vector<int>&A){
    // 8, 5, 1, 7, 10, 12
    int i=0;
    return create_tree(A, i, INT_MAX);
}

Node* define_head(){
    //      1
    //  2         3
    //4  5      6  7
    //            8 9
    //             10 11
    Node* head = new Node(1);
    Node* tree2 = new Node(2);
    Node* tree3 = new Node(3);
    Node* tree4 = new Node(4);
    Node* tree5 = new Node(5);
    Node* tree6 = new Node(6);
    Node* tree7 = new Node(7);
    Node* tree8 = new Node(8);
    Node* tree9 = new Node(9);
    Node* tree10 = new Node(10);
    Node* tree11 = new Node(11);
    head->left = tree2;
    head->right = tree3;
    tree2->left = tree4;
    tree2->right = tree5;
    tree3->left = tree6;
    tree3->right = tree7;
    tree7->left = tree8;
    tree7->right = tree9;
    tree9->left = tree10;
    tree9->right = tree11;
    return head;
}

extern Node *head = define_head();