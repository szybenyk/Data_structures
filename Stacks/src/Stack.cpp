#include "../include/Stack.h"

#include <iostream>


Stack::Stack() : m_top{ -1 }
{
}

bool Stack::push(int number)
{
    if( isFull() )
        return false;
    else
    {
        m_data[++m_top] = number;
        std::cout << number << " is pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if( isEmpty() )
        return -1;
    else
        return m_data[m_top--];
}

int Stack::peek()
{
    if( isEmpty() )
        return -1;
    else
        return m_data[m_top];
}

int Stack::size()
{
    return m_top;
}

bool Stack::isEmpty()
{
    if ( m_top < 0 )
    {
        std::cerr << "Stack is empty\n";
        return true;
    }
    return false;
}

bool Stack::isFull()
{
    if( m_top >= (MAX_STACK_SIZE - 1) )
    {
        std::cerr << "Stack overflow\n";
        return true; 
    }
    return false;
}
