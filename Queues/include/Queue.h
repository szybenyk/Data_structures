// Implementation Queue using array

class Queue
{
private:
    int m_front, m_rear, m_size;
    unsigned m_capacity;
    int* m_data;

public:
    explicit Queue(unsigned capacity);
    ~Queue();

    void enQueue(int element);
    int deQueue();
    int front() const;
    int rear() const;
    bool isEmpty() const;
    bool isFull() const;

    void printQueue() const;
};
