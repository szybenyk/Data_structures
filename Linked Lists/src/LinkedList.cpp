#include "../include/LinkedList.h"

#include <iostream>


LinkedList::LinkedList() : m_head{ nullptr }, m_tail{ nullptr }, m_size{ 0 }
{
}

LinkedList::~LinkedList()
{
    //delete m_head;
    //if (m_head != m_tail)
        //delete m_tail;
}

std::size_t LinkedList::size()
{
    return m_size;
}

bool LinkedList::push_front(int data)
{
    Node* node{ new Node(data) };

    node->setNext(m_head);
    m_head = node;

    ++m_size;
    return true;
}

bool LinkedList::push_back(int data)
{
    Node* node{ new Node(data) };
    node->setNext(nullptr);

    if( m_head == nullptr )
        m_head = node;
    if( m_tail != nullptr )
        m_tail->setNext(node);
    m_tail = node;

    ++m_size;

    return true;
}

bool LinkedList::push_after(int prev_data, int data)
{
    Node* node{ new Node(data) };

    Node* loopNode = m_head;
    while ( loopNode->getData() != prev_data )
    {
        loopNode = loopNode->getNext();
        if( loopNode == nullptr )
        {
            std::cerr << "ERROR: Cann't add " << data << " after " << prev_data << ". ";
            std::cerr << "There is no " << prev_data << " element in the list\n";
            return false;
        }
    }
    
    node->setNext(loopNode->getNext());
    loopNode->setNext(node);

    ++m_size;

    return true;
}

void LinkedList::print()
{
    Node* loopNode = m_head;
    std::cout << "HEAD -> ";
    while( loopNode != nullptr )
    {
        std::cout << loopNode->getData() << " -> ";
        loopNode = loopNode->getNext();
    };
    std::cout << "NULL\n";
}
