#include "include/Queue.h"

#include <iostream>


int main()
{
    Queue queue1(5);

    queue1.deQueue();

    queue1.enQueue(1);
    queue1.enQueue(2);
    queue1.enQueue(3);
    queue1.enQueue(4);
    queue1.enQueue(5);
    std::cout << "Front element: " << queue1.front() << '\n';

    queue1.enQueue(6);

    queue1.printQueue();
    queue1.deQueue();
    std::cout << "Front element: " << queue1.front() << '\n';
    queue1.printQueue();

    return 0;
}
