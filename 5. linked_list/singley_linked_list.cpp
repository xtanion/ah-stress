#include <bits/stdc++.h>
#include <cstddef>
#include <cstdlib>
using namespace std;

struct Node{
    int val;
    Node *next;
};

void Insert(Node** headptr, int x){
    Node* newNode = new Node();
    newNode->val = x;
    newNode->next = *headptr;
    *headptr = newNode;
}

void Append(Node** headptr, int x){
    Node* temp  = *headptr;
    Node* newNode = new Node();
    newNode->val = x;
    newNode->next = NULL;

    if (*headptr == NULL) {
        *headptr = newNode;
        return;
    }

    while (true) {
        if(temp->next == NULL){
            temp->next = newNode;
            break;
        }
        else{
            temp = temp->next;
        }
    }
}

void Print(Node* head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

void Delete(Node** headptr, int position){
    Node * temp1 = *headptr;

    if(position==0){
        *headptr = temp1->next;
        delete temp1;
        return;
    }
    for(int i=0; i<position-1; i++)
        temp1 = temp1->next;
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    // free(temp2);
    delete temp2;

}

int main(){   
    Node *head = NULL;  //empty list
    // Adding elemnt to empty linked list
    Node * temp = new Node();  // Node * temp = (Node*) malloc(sizeof(Node))
    temp->val = 2;
    temp->next = NULL;

    head = temp;

    // Adding one more lement;
    Node * node2 = new Node();
    node2->val = 4;
    node2->next = NULL;

    head->next = node2;

    Insert(&head, 6);
    Append(&head, 7);
    Append(&head, 8);
    // Array is 6 2 4 7 8 
    Delete(&head, 1);

    Print(head);
}