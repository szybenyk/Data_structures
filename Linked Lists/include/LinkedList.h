#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"


class LinkedList
{
private:
    Node* m_head{};
    Node* m_tail{};
    unsigned m_size{};

public:
    LinkedList();
    ~LinkedList();

    std::size_t size();
    bool push_front(int data);
    bool push_back(int data);
    bool push_after(int prev_data, int data);
    void print();
};

#endif