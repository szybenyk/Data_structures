#include "../include/Queue.h"

#include <iostream>


Queue::Queue(unsigned capacity) : m_front{ -1 }, m_rear{ -1 }, m_size{ 0 }, m_capacity{ capacity }
{
    m_data = new int[capacity];
}

Queue::~Queue()
{
    delete[] m_data;
}

void Queue::enQueue(int element)
{
    if( isFull() )
        return;
    else
    {
        if( m_front == -1 )
            m_front = 0;
        m_data[++m_rear] = element;
        ++m_size;
        std::cout << element << " enqueued to queue\n";
    }
}

int Queue::deQueue()
{
    if( isEmpty() )
        return -1;

    // First option by moving front pointer to next element. Waste space (solution circular queue) !!!
    int element{ m_data[m_front++] };
    --m_size;
/*
    // Second option by shifting all elements to front by one position in table (a,b,c)->(b,c). Keep space !!!
    int element{ m_data[m_front] };
    for( int counter{ m_front }; counter < m_rear; ++counter )
        m_data[counter] = m_data[counter+1];
    --m_rear;
*/
    std::cout << element << " dequeued from queue\n";

    if( m_front >= m_rear ) // Reset queue due to last element
    {
        m_front = -1;
        m_rear = -1;
    }

    return element;
}

int Queue::front() const
{
    if( isEmpty() )
        return -1;
    return m_data[m_front];
}

int Queue::rear() const
{
    if( isEmpty() )
        return -1;
    return m_data[m_rear];
}

bool Queue::isEmpty() const
{
    if( m_front == -1 || m_size == 0 )
    {
        std::cerr << "Queue is empty\n";
        return true;
    }
    return false;
}

bool Queue::isFull() const
{
    if( m_front == 0 && m_rear == static_cast<int>(m_capacity - 1) )
    {
        std::cerr << "Queue is full\n";
        return true;
    }
    return false;
}

void Queue::printQueue() const
{
    if( isEmpty() )
        return;
    else
    {
        std::cout << "Front index -> " << m_front << "\nItems -> ";
        for( int counter{ m_front }; counter <= m_rear; ++counter)
            std::cout << m_data[counter] << '\t';
        std::cout << "\nRear index -> " << m_rear << '\n'; 
    }
}