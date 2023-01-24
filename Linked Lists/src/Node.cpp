#include "../include/Node.h"


Node::Node(int data) : m_data{ data }, m_next{ nullptr }
{
}
/*
Node& Node::operator=(const Node& other)
{
    m_data = other.m_data;
    m_next = std::move(other.m_next);

    return *this; 
}
*/
std::ostream& operator<<(std::ostream& os, const Node& node)
{
    os << "Node: " << node.getData() << '\t' << node.m_next ;
    return os;
}

int Node::getData() const
{
    return m_data;
}

Node* Node::getNext() const
{
    return m_next;
}

void Node::setData(int data)
{
    m_data = data;
}

void Node::setNext(Node* next)
{
    m_next = next; 
}
