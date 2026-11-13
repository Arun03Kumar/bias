#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    // Node(int data) : data(data), next(nullptr)
    // {
    // }

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1 && temp != nullptr)
    {
        temp = temp->next;
        count++;
    }

    // if (temp == nullptr || temp->next == nullptr)
    // {
    //     insertAtTail(head, data);
    //     return;
    // }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{

    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(30);
    Node n5(30);
    Node n6(30);
    Node n7(30);
    Node n8(30);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;

    Node *temp = &n1;

    insertAtTail(temp, 100);

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;

    // cout << n1.data << " -> " << n1.next->data << " -> " << n2.next->data << "->" << n3.next->data << endl;

    return 0;
}