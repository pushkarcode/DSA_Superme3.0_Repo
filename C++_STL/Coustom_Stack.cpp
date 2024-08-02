#include <iostream>
#include <stack>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size = 10); // constructor
    ~Stack();             // destructor

    void push(int x);
    int pop();
    int peek();

    bool isEmpty();
    bool isFull();
};

// Constructor to initialize the stack
Stack::Stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;
}

// Destructor to free the memory allocated to the stack
Stack::~Stack()
{
    delete[] arr;
}

// Function to add an element to the stack
void Stack::push(int x)
{
    if (isFull())
    {
        std::cout << "Stack Overflow\n";
        return;
    }
    arr[++top] = x;
}

// Function to pop an element from the stack
int Stack::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack Underflow\n";
        return -1;
    }
    return arr[top--];
}

// Function to return the top element of the stack
int Stack::peek()
{
    if (isEmpty())
    {
        std::cout << "Stack is Empty\n";
        return -1;
    }
    return arr[top];
}

// Function to check if the stack is empty
bool Stack::isEmpty()
{
    return top == -1;
}

// Function to check if the stack is full
bool Stack::isFull()
{
    return top == capacity - 1;
}

int main()
{
    Stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    std::cout << "Top element is: " << stack.peek() << std::endl;

    // cout << "size of stack" << stack.isFull() << std::endl;

    std::cout << "Stack elements: \n";
    while (!stack.isEmpty())
    {
        std::cout << stack.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}