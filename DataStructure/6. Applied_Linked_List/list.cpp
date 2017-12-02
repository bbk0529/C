
#include <iostream>
#include "list.h"
using namespace std;

int main(){
    linkedList_h *H;
    H=createLinkedList_h();
    printNode(H);
    addNode(H, 1);
    addNode(H, 3);
    addNode(H, 5);
    addNode(H, 7);
    addNode(H, 99);
    printNode(H);
    listNode* a = searchNode(H,3);
    cout << "yes  - " <<a->data << endl;
    listNode* b = searchNode(H,5);
    cout << "yes  - " <<b->data << endl;

    insertNode(H,b,-2);
    cout << "-2 has been inserted" << endl;
    cout << "see what we got" <<endl;
    printNode(H);
}
