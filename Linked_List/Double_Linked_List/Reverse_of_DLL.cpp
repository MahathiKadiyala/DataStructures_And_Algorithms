#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int x){
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};

Node* reverseDLL(Node* head){
    if(head == nullptr || head->next == nullptr)
        return head;

    Node* current = head;
    Node* temp = nullptr;

    while(current != nullptr)  {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    head = temp->prev;
    return head;
}
void print(Node* head){
    while(head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }

    cout << "NULL";
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;
    cout << "Before Reverse:\n";
    print(head);
    head = reverseDLL(head);
    cout << "\n\nAfter Reverse:\n";
    print(head);
    return 0;
}