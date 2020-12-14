#include "linkedlist.h"

LinkedList::LinkedList() {
    this->head = new Node();
}

LinkedList::~LinkedList() {
    for(Node* ptr = this->head->getNext(); ptr != NULL;)
    {
        Node* aux = ptr->getNext();
        delete ptr;
        ptr = aux;
    }
    delete this->head;
}

/* void LinkedList::sort() {

}
 */
void LinkedList::print() {
    if(this->head->getNext() == NULL)
        cout << "Empty List.";
    else {
        for(Node* ptr = this->head->getNext(); ptr != NULL; ptr = ptr->getNext())
            cout << ptr->getKey() << " ";
        cout << "Head: " << this->head->getNext()->getKey() << " Tail: " << this->tail->getKey() << endl;
    }
    cout << endl;
}

void LinkedList::insert_key(float key){
    Node* ptr = new Node(key, head->getNext());
    
    if(this->head->getNext() == NULL) {
        this->tail = ptr;
    }
    
    this->head->setNext(ptr);
}

float LinkedList::rmv_key(float key) {
	Node* ptr;
	Node* aux;
	
	aux = this->head;
	ptr = this->head->getNext();
	
    //Searching for the key
	while (ptr != NULL && ptr->getKey() != key)
	{
		aux = ptr;
		ptr = ptr->getNext();
	}
	
    //If key was found
	if (ptr != NULL)
	{
		float val = ptr->getKey();
		aux->setNext(ptr->getNext());
        
        if(ptr == tail) {
            this->tail = aux;
        }
        
        delete ptr;
		return val;
	}

	else {
        cout << "Number not found." << endl;
		return 0.0;
    }
}