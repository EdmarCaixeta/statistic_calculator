#include "node.h"
#include <iostream>

using namespace std;

class LinkedList
{
    private:
        Node* head;
        Node* tail;
    
    public:
        LinkedList();
        ~LinkedList();
        void print();
        void sort();
        void insert_key(float);
        float rmv_key(float);
};