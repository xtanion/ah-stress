#include <bits/stdc++.h>
#include <cstddef>
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

int solve(ListNode* A){
    ListNode* head = A;
    ListNode* tail = head;
    ListNode* temp = new ListNode(0);
    while (tail!=NULL) {
        // cout<<"Loop1 "<<endl;
        ListNode* t = new ListNode(tail->val);
        t->next = temp;
        temp = t;
        tail = tail->next;
    }

    Print(temp);

    tail = head;
    while (tail!=NULL) {
        // cout<<"Loop2 "<<endl;
        if (tail->val != temp->val) {
            return 0;
        }

        tail = tail->next;
        temp = temp->next;
    }

    // cout << "Yes!" <<endl;
    return 1;
}


int main(){
    ListNode* A = new ListNode(1);
    ListNode* A1 = new ListNode(2);
    ListNode* A2 = new ListNode(1);
    ListNode* A3= new ListNode(2);
    ListNode* A4= new ListNode(2);
    ListNode* A5= new ListNode(1);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;
    A3->next = A4;
    A4->next = A5;
    solve(A);
}