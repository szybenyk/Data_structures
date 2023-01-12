#include "include/Stack.h"

#include <iostream>


int main(int argc, char const *argv[])
{
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "My stack size is: " << myStack.size() << " element\n";
    std::cout << myStack.pop() << " popped from stack\n";
    std::cout << "The top element is: " << myStack.peek() << '\n';
    std::cout << "Elements present in stack: ";
    while( !myStack.isEmpty() )
    {
        std::cout << myStack.peek() << " ";
        myStack.pop();
    }

    return 0;
}
