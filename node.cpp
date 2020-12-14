#include "node.h"
#include <iostream>

Node::Node() {
    this->next = NULL;
    this->key = 0;
}

Node::Node(float key, Node* ptr) {
    this->setNext(ptr);
    this->setKey(key);
}

void Node::setKey(float key) {
    this->key = key;
}

void Node::setNext(Node* node) {
    this->next = node;
}

float Node::getKey() {
    return this->key;
}

Node* Node::getNext() {
    return this->next;
}