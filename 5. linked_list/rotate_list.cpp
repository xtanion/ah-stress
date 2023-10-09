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
    ListNode* headptr = A;
    ListNode* trailptr = A;
    int N=0;
    while(trailptr!=NULL){
        N++;
        trailptr = trailptr->next;
    }
    cout << N<<endl;
    trailptr = headptr;
    ListNode* newlist = new ListNode(0);
    ListNode* newptr = newlist;
    int i = 0;
    B = B%N;

    while (trailptr != NULL) {
        if (i>N-B-1) {
            cout << "inseting: "<<trailptr->val<<endl;
            ListNode* temp = new ListNode(trailptr->val);
            newptr->next = temp;
            newptr = newptr->next;
        }
        i++;
        trailptr = trailptr->next;
    }

    Print(newlist);

    newptr->next = headptr;
    newptr = newlist;
    for (i=0; i<N; i++) {
        newptr = newptr->next;
    }
    newptr->next = NULL;
    // Print(newlist);
    return newlist->next;
}






int main(){
    ListNode* A = new ListNode(1);
    ListNode* A1 = new ListNode(2);
    ListNode* A2 = new ListNode(3);
    ListNode* A3= new ListNode(4);
    ListNode* A4= new ListNode(5);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;
    A3->next = A4;

    int B = 2;

    solve(A, B);
}