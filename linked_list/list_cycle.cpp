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


// FLOYD's ALGORITHM
ListNode* solve(ListNode*A, int B){
    ListNode *fast = A;
    ListNode *slow = A;

    while (fast->next && fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast) {
          while (A != slow) {
            A = A->next;
            slow = slow->next;
          }
          return slow;
        }
    }
    return NULL;
}

int main(){
    ListNode* A = new ListNode(1);
    ListNode* A1 = new ListNode(2);
    ListNode* A2 = new ListNode(3);
    ListNode* A3= new ListNode(9);
    ListNode* A4= new ListNode(0);
    ListNode* A5= new ListNode(6);
    ListNode* A6= new ListNode(7);
    ListNode* A7= new ListNode(8);
    ListNode* A8= new ListNode(4);
    ListNode* A9= new ListNode(3);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;
    A3->next = A4;
    A4->next = A5;
    A5->next = A6;
    A6->next = A7;
    A7->next = A8;
    A8->next = A5;
    // A9->next = A;
    int B = 2;
    solve(A, B);
}