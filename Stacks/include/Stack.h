#define MAX_STACK_SIZE 100

class Stack
{
private:
    int m_top{};
    int m_data[MAX_STACK_SIZE]{};

public:
    Stack();

    bool push(int number);
    int pop();
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};
