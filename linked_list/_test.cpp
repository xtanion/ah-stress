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

Node* willitcopy(Node* A){
    Node* copy = A;
    Node* add1 = new Node();
    add1->val = 0;
    add1->next = copy->next;
    copy->next = add1;

    cout << "will it copy? A & copy same?"<<endl;
    Print(copy);
    Print(A);
    return A;
}

Node* willitadd(Node *A){
    Node* copy = A;
    Node* temp = copy;

    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* add1 = new Node();
    add1->val = 0;
    add1->next = NULL;
    temp->next = add1;

    cout << "will it append?"<<endl;
    Print(copy);
    Print(A);
    return A;
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
    Print(head);
    // willitcopy(head);  // conc: both A & copy pointers are modified
    willitadd(head);
}