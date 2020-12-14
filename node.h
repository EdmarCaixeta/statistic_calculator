class Node
{
    private:
        float key;
        Node* next;
    
    public:
        Node();
        Node(float);
        Node(Node*);
        Node(float, Node*);
        void setKey(float);
        void setNext(Node*);
        float getKey();
        Node* getNext();
};