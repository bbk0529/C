#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include <stdlib.h>
using namespace std;

typedef struct listNode {
    int data;
    struct listNode* link;
}listNode;

typedef struct linkedList_h{
    listNode* head;
}linkedList_h; 

linkedList_h* createLinkedList_h(){
    linkedList_h* H;
    H=(linkedList_h*) malloc(sizeof(linkedList_h));
    H->head = NULL;
    cout<<"linked list has been just created with null data node"<<endl;
    return H;
};

void addNode(linkedList_h* H, int x){
    listNode* NewNode;
    listNode* LastNode;
    NewNode = (listNode*)malloc(sizeof(listNode));
    NewNode -> data=x;
    NewNode -> link =NULL;
    if (H->head == NULL) {
        H->head = NewNode;
        cout << x << " is NEWLY added as the FIRST ELEMENT in Linked List" <<endl;
        return;
    }
    
    LastNode=H->head;
    while(LastNode ->link != NULL) LastNode=LastNode->link;
    LastNode->link = NULL;
    cout << x << " is added in Linked List on the top of the previous value" <<endl;

};
void printNode(linkedList_h* H){
    listNode* CurrentNode;
    CurrentNode = (listNode*)malloc(sizeof(listNode));
    if (H->head == NULL) {
        cout<<"There is no NODE for popping"<<endl;
        return;
    }
    CurrentNode = H->head;
    cout<< CurrentNode->data<<endl;
    while(CurrentNode->link!=NULL) {
        CurrentNode = CurrentNode->link;
         cout<< CurrentNode->data<<endl;
    }

};

#endif
