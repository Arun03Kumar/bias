#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class StackLL
{
public:
    Node *top;

    StackLL()
    {
        this->top = NULL;
    }

    void push(int data)
    {
        Node *new_node = new Node(data);
        new_node->next = top;
        top = new_node;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{

    return 0;
}