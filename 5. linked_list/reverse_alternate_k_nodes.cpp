#include <bits/stdc++.h>
#include <cstddef>
#include <shared_mutex>
using namespace std;


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void Print(ListNode* head){
    ListNode * temp = head;
    while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

ListNode* solve(ListNode* A, int B){
    ListNode* head = A;
    ListNode* headptr = head;
    ListNode* out = new ListNode(0);
    ListNode* outptr = out;
    bool skip = false;
    int count = 0;
    while(headptr!=NULL){
        count ++;
        cout << count <<endl;
        for(int i=0; i<B; i++){
            cout << "headptr: "<< headptr->val<<endl;
            if (skip==false) {
                ListNode* t = new ListNode(headptr->val);
                t->next = out;
                out = t;
                Print(out);
            }else{
                // ListNode* t = new ListNode(headptr->val);
                outptr->next = headptr;
                outptr = outptr->next;
            }
            headptr = headptr->next;
        }
        skip = skip?false:true;
    }

    Print(out);
    return out->next;
}

int main(){
    ListNode* A = new ListNode(1);
    ListNode* A1 = new ListNode(2);
    ListNode* A2 = new ListNode(3);
    ListNode* A3= new ListNode(4);
    ListNode* A4= new ListNode(5);
    ListNode* A5= new ListNode(6);
    ListNode* A6= new ListNode(7);
    ListNode* A7= new ListNode(8);
    ListNode* A8= new ListNode(9);
    ListNode* A9= new ListNode(0);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;
    A3->next = A4;
    A4->next = A5;
    A5->next = A6;
    A6->next = A7;
    A7->next = A8;
    A8->next = A9;
    // A9->next = A;
    int B = 3;
    solve(A, B);
}