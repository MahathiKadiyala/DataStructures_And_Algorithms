#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data1)
    {
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

Node* deleteHead(Node* head)
{
    if(head == nullptr)
        return nullptr;

    if(head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node* temp = head;

    head = head->next;
    head->prev = nullptr;

    delete temp;

    return head;
}

void print(Node* head)
{
    while(head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    Node* head = new Node(10);

    head->next = new Node(20);
    head->next->prev = head;

    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    cout << "Before:\n";
    print(head);

    head = deleteHead(head);

    cout << "\nAfter:\n";
    print(head);
}