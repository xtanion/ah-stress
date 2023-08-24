#include <bits/stdc++.h>
using namespace std;


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* solve(ListNode* A) {
        int cnto=0,cntz=0;
   
    ListNode* root=A;
    ListNode* start=A;
   
    while(root!=NULL)
    {
        if(root->val==0)cntz++;
        else cnto++;
       
        root=root->next;
    }
   
    while(start!=NULL)
    {
        if(cntz>0)
        {
            start->val=0;
            cntz--;
        }else{
            start->val=1;
            cnto--;
        }
       
        start=start->next;
    }
   
    return A; 
}

void Print(ListNode* head){
    ListNode * temp = head;
    while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

int main(){
    ListNode* A = new ListNode(1);
    ListNode* A1 = new ListNode(0);
    ListNode* A2 = new ListNode(0);
    ListNode* A3= new ListNode(1);
    A->next = A1;
    A1->next = A2;
    A2->next = A3;
    Print(A);
}
