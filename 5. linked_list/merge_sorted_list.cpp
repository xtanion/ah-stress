#include <algorithm>
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

ListNode* merge(ListNode* A, ListNode* B){
    ListNode* newlist = new ListNode(0);
    ListNode* newptr = newlist;

    ListNode* aptr = A;
    ListNode* bptr = B;

    while(aptr!=NULL && bptr!=NULL){
        ListNode* temp = new ListNode(0);
        if(aptr->val < bptr->val){
            temp->val = aptr->val;
            newptr->next = temp;
            aptr = aptr->next;
        }else{
            temp->val = bptr->val;
            newptr->next = temp;
            bptr = bptr->next;
        }

        newptr = newptr->next;
    }

    ListNode* remaining = (aptr!=NULL)?aptr:bptr;
    while (remaining!=NULL) {
        cout << remaining->val<<endl;
        ListNode* temp = new ListNode(0);
        temp->val = remaining->val;
        newptr->next = temp;
        remaining = remaining->next;
        newptr = newptr->next;
    }
    Print(newlist);
    return newlist->next;
}



int main(){
    ListNode* A = new ListNode(1);
    ListNode* A1 = new ListNode(2);
    ListNode* A2 = new ListNode(3);
    ListNode* A3= new ListNode(4);
    
    ListNode* B = new ListNode(5);
    ListNode* B1= new ListNode(6);
    ListNode* B2= new ListNode(7);
    ListNode* B3= new ListNode(8);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;

    B->next = B1;
    B1->next = B2;
    // B2->next = B3;

    Print(A);
    Print(B);
    
    merge(A, B);
}