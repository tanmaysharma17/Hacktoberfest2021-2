#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
// Insert in Beginning
void insertBeg(Node** head, int data){
    Node* node = new Node();
    Node* t = *head;
    node->data  = data;     //  Insert data in new node
    node->next = *head;   // link new node at beginning of list
    if (*head != NULL){
        while(t->next != *head)
            t = t->next;
        t->next = node;
    }
    else
        node->next = node;
    *head = node;  // Change the head to new node.
}

void printList(Node *first){
    Node *temp = first;
    if (first != NULL){
        // Keep printing nodes till we reach the first node again
        do{
            cout<< temp->data<<" ";
            temp = temp->next;
        }while (temp != first);
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    insertBeg(&head, 6);
    insertBeg(&head, 2);
    insertBeg(&head, 4);
    insertBeg(&head, 8);
    insertBeg(&head, 5);
    insertBeg(&head, 3);
    cout<<"Linked List = ";
    printList(head);
    return 0;
}
