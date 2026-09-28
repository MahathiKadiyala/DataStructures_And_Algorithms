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

Node* insertAtTail(Node* head,int val){
    Node* temp = new Node(val);
    if(head==nullptr)
        return temp;
    Node* curr=head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->prev=head;
    head->next->next=new Node(30);
    head->next->next->prev=head->next;
    cout<<"Before:\n";
    print(head);
    head=insertAtTail(head,40);
    cout<<"\nAfter:\n";
    print(head);
}