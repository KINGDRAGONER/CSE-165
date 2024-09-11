#include <iostream>
#include "LinkedList.h"

int main(int argc, const char* argv[]) {
    LinkedList* linkedList = new LinkedList(47); // Changed this line
    linkedList->add(linkedList->head, 5);
    linkedList->add(linkedList->head->next->next, 5);
    linkedList->print();
    linkedList->cleanup();

    return 0;
}
