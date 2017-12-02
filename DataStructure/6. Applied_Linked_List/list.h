#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <stdlib.h>
using namespace std;

typedef struct listNode {
    int data;
    struct listNode* link;
}listNode;
//

typedef struct linkedList_h{
    listNode* head;
}linkedList_h;
//

linkedList_h* createLinkedList_h(){
    linkedList_h* H;
    H=(linkedList_h*) malloc(sizeof(linkedList_h));
    H->head = NULL;
    cout<<"linked list has been just created with null data node"<<endl;
    return H;
};

void addNode(linkedList_h* H, int x){
    listNode* tempNode;
    listNode* NewNode;
    NewNode = (listNode*)malloc(sizeof(listNode));
    NewNode -> data=x;
    NewNode -> link =NULL;
    if (H->head == NULL) {
        H->head = NewNode;
        NewNode->link = NewNode;
        cout << x << " is NEWLY added as the FIRST ELEMENT in Linked List" <<endl;
        return;
    }

    tempNode=H->head;
    while(tempNode->link!= H->head) {
      tempNode=tempNode->link;
    }
    NewNode->link = tempNode->link;
    tempNode->link = NewNode;
    H->head = NewNode;
    cout << x << " is added in Linked List on the top of the previous value" <<endl;

};


listNode* searchNode(linkedList_h* H, int x){
  if (H->head == NULL) {
    cout<<"No node inside"<< endl;
  }
  listNode* temp;
  temp = H->head;
  int i=0;
  while (temp->data != x) {
    temp = temp->link;
    i++;
  }
  cout<< i << "x has been found" << endl;
  return temp;

}

void insertNode(linkedList_h* H, listNode* prevNode, int x){
  listNode* newNode;
  newNode=(listNode*)malloc(sizeof(listNode));
  newNode->data = x;

  newNode->link = prevNode->link;
  prevNode->link = newNode;
}



void printNode(linkedList_h* H){
    listNode* CurrentNode;
    if (H->head == NULL) {
        cout<<"There is no NODE for popping"<<endl;
        return;
    }
    CurrentNode = H->head;
    cout<< CurrentNode->data<<endl;
    while(CurrentNode->link!=H->head) {
        CurrentNode = CurrentNode->link;
         cout<< CurrentNode->data<<endl;
    }

};

#endif
