#ifndef NODE_H
#define NODE_H

#include <iostream>


class Node
{
private:
    int m_data{};
    Node* m_next{};

public:
    explicit Node(int data = 0);

    //Node& operator=(const Node& other);
    friend std::ostream& operator<<(std::ostream& os, const Node& node);

    int getData() const;
    Node* getNext() const;
    void setData(int data);
    void setNext(Node* next);
};

#endif