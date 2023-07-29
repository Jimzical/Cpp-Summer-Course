/*
2) Design a template class called &quot;Stack&quot; that can hold elements of any data type.
Implement methods to push elements onto the stack, pop elements from the stack,
and check if the stack is empty. Additionally, include a method to get the size of
the stack.
*/

#include <iostream>

using namespace std;

template <class T>

class Stack
{
private:
    T *stack;
    int size;
    int top;

public:
    Stack(int s)
    {
        size = s;
        stack = new T[size];
        top = -1;
    }
    void push(T item)
    {
        if (isFull())
        {
            cout << "Stack is full!" << endl;
        }
        else
        {
            top++;
            stack[top] = item;
        }
    }
    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        else
        {
            T item = stack[top];
            top--;
            return item;
        }
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == size - 1;
    }
    int getSize()
    {
        return size;
    }
};

int main()
{
    Stack<int> stack(10);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    return 0;
}
