#include <iostream>
#include "list.h"
using namespace std;
    
int main(){
    linkedList_h *H;
    H=createLinkedList_h();
    printNode(H);
    addNode(H, 1);
    addNode(H, 3);
    printNode(H);
}
