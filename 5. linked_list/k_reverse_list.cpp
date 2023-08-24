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

    ListNode *copy = A;
    ListNode* out = new ListNode(0);
    ListNode* outptr = out;
    int outlen = 1;

    while (copy != NULL) {
        ListNode* iter = new ListNode(0);
        for(int i=0; i<B; i++){
            ListNode *temp = new ListNode(0);
            temp->val = copy->val;
            temp->next = iter;
            iter = temp;
            copy = copy->next;
            outlen++;
            // if(outlen>B){
            //     outptr = outptr->next;
            // }
        }
        outptr->next = iter;

        for(int i=0; i<B; i++){
            outptr = outptr->next;
        }
        outptr->next = NULL;
        // cout<<"out:"<<endl;
        // Print(out);
        // cout<<endl;
    }

    return out->next;

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
    int B = 1;
    Print(solve(A, B));
}