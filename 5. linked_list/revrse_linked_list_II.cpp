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
    int m = 2, n=4;
    ListNode* head = A;
    ListNode* curr = head;
    int count = 0;
    ListNode* prev = NULL;
    ListNode* start = NULL;
    ListNode* end = NULL;

    while (curr!=NULL) {
        count++;

        if(count<m) start = curr;
        if(count==m) end = curr;

        if(count>m && count<=n){
            cout << "curr: "<<curr->val<<endl;
            end->next = curr->next;
            curr->next = prev;
            start->next = curr;
            prev = start->next;
            Print(head);   
            curr = curr->next;
        }else {
            prev = curr;
        }
        curr = curr->next;
        // Print(head);
    }

    Print(head);
    return head;
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
    ListNode* A9= new ListNode(10);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;
    A3->next = A4;
    // A4->next = A5;
    // A5->next = A6;
    // A6->next = A7;
    // A7->next = A8;
    // A8->next = A9;
    solve(A);
}