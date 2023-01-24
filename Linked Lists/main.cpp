#include <iostream>

#include "include/LinkedList.h"


int main()
{
    LinkedList l1;
    l1.push_front(23);
    l1.push_front(8);
    l1.push_front(10);
    l1.push_front(100);
    l1.print();

    LinkedList l2;
    l2.push_back(23);
    l2.push_back(8);
    l2.push_back(10);
    l2.push_back(100);
    l2.print();

    LinkedList l3;
    l3.push_back(100);
    l3.push_front(10);
    l3.push_front(8);
    l3.push_back(23);
    l3.push_front(180);
    l3.push_after(180, 345);
    l3.push_after(8,128);
    l3.print();
    l3.push_after(0, 125);
    l3.push_back(190);
    l3.push_after(190, 67);
    l3.print();
    std::cout << "Size linked list is: " << l3.size() << '\n';

    return 0;
}

