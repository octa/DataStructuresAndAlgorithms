// TODO:
// 1. Fix all return types. Is void needed everywhere?
// 2. Fix to accept dynamic types instead of just int - Solution is to use the generic void*.

#include <iostream>
#include "LinkedList.h"

using namespace std; // Don't want to type std::cout everytime.

struct Node { // Define a structure for nodes. Nodes will have the actual data and a pointer to the next node.
    int item;
    struct Node* next;

    Node() {
        item = NULL;
        next = nullptr;
    }
};

struct List { // This structure is used to keep a track of the head. Reasoning - We need a way to keep track of where the head starts without which it would be impossible(?) to know where to start from.
    struct Node* head;
};

int main() {

struct List* list = new List;

insertAtTail(list, 2);
insertAtTail(list, 3);
//insertAtHead(list, 1);
deleteAtHead(list);

cout << list->head->item << endl;
cout << list->head->next->item << endl;
cout << list->head->next->next->item << endl;

}

void insertAtTail(struct List* list, int data) {

    struct Node* nodeToBeInserted = new Node; // Create a new node that is to be inserted.
    struct Node* tracePointer = new Node;     // Create another Node pointer to go from head to tail so that the new code can be inserted at the tail.
    nodeToBeInserted->item = data;
    nodeToBeInserted->next = nullptr;

    if(list->head == nullptr) {
        list->head = nodeToBeInserted;
    }
    else {
        tracePointer = list->head;
        while(tracePointer->next != nullptr) { // Go from head to tail. Another explanation, find the tail.
            tracePointer = tracePointer->next;
        }
        tracePointer->next = nodeToBeInserted;
    }

}

void insertAtHead(struct List* list, int data) {

    struct Node* nodeToBeInserted = new Node;

    nodeToBeInserted->item = data;
    nodeToBeInserted->next = nullptr;

    if(list->head == nullptr) {
        list->head = nodeToBeInserted;
    }
    else {
        nodeToBeInserted->next = list->head;
        list->head = nodeToBeInserted;
    }

}

void insertAnywhere() {

}

void deleteAtHead(List* list) {

    struct Node* node;
    if(list->head->next == nullptr){
        free(list->head);
    }
    else {
        node = list->head;
        list->head = list->head->next;
        free(node);
    }

}

void deleteAtTail(List* list) {

    struct Node* node;
    struct Node* trace;

    trace=list->head;
    while(trace->next != nullptr) {
        trace = trace->next;
    }

}