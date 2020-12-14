#include "linkedlist.h"

int main(int argc, char const *argv[]) {
    LinkedList* list = new LinkedList();

    for(int i = 1; i < argc; i++) {
        list->insert_key(atof(argv[i]));
    }
    cout << "Numbers: ";
    list->print();

}