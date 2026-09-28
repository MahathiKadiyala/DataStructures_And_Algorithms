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

Node* deleteTail(Node* head)
{
    if(head == nullptr)
        return nullptr;

    if(head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node* temp = head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->prev->next = nullptr;

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

    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;

    cout << "Before:\n";
    print(head);

    head = deleteTail(head);

    cout << "\nAfter:\n";
    print(head);
}