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


ListNode* add(ListNode* A, ListNode* B){
    ListNode* newlist = new ListNode(0);
    ListNode* newptr = newlist;

    ListNode* aptr = A;
    ListNode* bptr = B;
    Print(A);
    Print(B);
    int numA = 0, numB = 0;
    int hand=0, sum;
    // Print(newlist);

    while (aptr!=NULL && bptr!=NULL) {
        sum = aptr->val + bptr->val + hand;
        hand = sum/10;
        cout << "sum of: "<<aptr->val << " " << bptr->val<<"hand: "<<hand<<endl;
        ListNode* temp = new ListNode(sum%10);
        newptr->next = temp;
        newptr = newptr->next;
        aptr = aptr->next;
        bptr = bptr->next;
    }

    ListNode* remaining = aptr!=NULL ? aptr : bptr;

    while (remaining!=NULL) {
        sum = remaining->val + hand;
        hand = sum/10;
        ListNode* temp = new ListNode(sum%10);
        newptr->next = temp;
        newptr = newptr->next;
        remaining = remaining->next;
    }

    if(hand!=0){
        ListNode* temp = new ListNode(hand);
        newptr->next = temp;
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
    B2->next = B3;

    Print(A);
    Print(B);
    
    add(A, B);
}