#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

bool search(Node* head, int key){
    while(head != nullptr)
    {
        if(head->data == key)
            return true;
        head = head->next;
    }
    return false;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    if(search(head,30))
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}