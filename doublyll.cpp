#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head->prev = n;
}

void insertAtTail(Node* &head, int val){
    if(head == NULL){
        insertAtHead(head , val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp; 
}

int main(){

    return 0;
}