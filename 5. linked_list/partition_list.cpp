#include <bits/stdc++.h>
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

// Solution

void Reverse(ListNode** head){
    // Initialize current, previous and next pointers
    ListNode* current = *head;
    ListNode *prev = NULL, *next = NULL;
 
    while (current != NULL) {
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head = prev;
}
ListNode* solve(ListNode* A, int B){
    ListNode* copy = A;
    ListNode* less = new ListNode(0);
    ListNode* lesstail = less;
    ListNode* more = new ListNode(0);
    ListNode* moretail = more;

    // Reverse(&copy);
    // Print(copy);

    while (copy != NULL) {
        if(copy->val < B){
            lesstail->next = copy;
            lesstail = lesstail->next;
            
        }else{
            moretail->next = copy;
            moretail = moretail->next;
        }
        copy = copy->next;
    }
    // Print(less);
    // Print(more);

    lesstail->next = more->next;
    moretail->next = NULL;

    A = less->next;
    return A;
    
}

int main(){
    ListNode* A = new ListNode(1);
    ListNode* A1 = new ListNode(4);
    ListNode* A2 = new ListNode(3);
    ListNode* A3= new ListNode(2);
    ListNode* A4= new ListNode(5);
    ListNode* A5= new ListNode(2);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;
    A3->next = A4;
    A4->next = A5;
    // Print(A);
    solve(A, 3);
}
