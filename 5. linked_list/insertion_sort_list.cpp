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

ListNode* solve(ListNode* A){
    ListNode* head = A;
    ListNode* curr = head;

    // curr = curr->next;
    while(curr!=NULL){
        ListNode* prev = head;
        cout << curr->val <<endl;

        while (prev!=curr) {
            if(curr->val < prev->val){
                // cout<< "comparing: "<<curr->val << " "<<prev->val<<endl;
                swap(prev->val, curr->val);
            }
            prev = prev->next;
        }
        curr = curr->next;
    }

    // Print(head);

    return head;
}

int main(){
    ListNode* A = new ListNode(4);
    ListNode* A1 = new ListNode(2);
    ListNode* A2 = new ListNode(3);
    ListNode* A3= new ListNode(9);
    ListNode* A4= new ListNode(0);
    ListNode* A5= new ListNode(1);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;
    A3->next = A4;
    A4->next = A5;
    Print(solve(A));
}