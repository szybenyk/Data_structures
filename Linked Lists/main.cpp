#include <iostream>

class Node
{
public:
    int m_data{};
    Node* next{}; 
};

class LinkedList
{
private:
    /* data */
public:
    LinkedList(/* args */);
    ~LinkedList();
};

LinkedList::LinkedList(/* args */)
{
}

LinkedList::~LinkedList()
{
}

void printList(const Node* node)
{
    while( node != nullptr )
    {
        std::cout << node->m_data << '\t';
        node = node->next;
    }
    std::cout << '\n';
}

void insertList(Node* afterNode, Node* insertNode)
{
    insertNode->next = afterNode->next;
    afterNode->next = insertNode;
}

int main()
{
    Node* head;
    Node* one = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;

    one = new Node();
    two = new Node();
    three = new Node();

    one->next = two;
    two->next = three;
    three->next = nullptr;
    
    one->m_data = 1;
    two->m_data = 2;
    three->m_data = 3;

    head = one;
    printList(head);

    Node* four = new Node();
    // Insert four after three
    four->m_data = 4;
    insertList(three, four);
    printList(head);

    return 0;
}

