#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data=x;
        prev=nullptr;
        next=nullptr;
    }
};
Node* insert_at_head(Node* head,int x){
    Node* temp=new Node(x);
    if(head==nullptr){
        return temp;
    }
    temp->next=head;
    head->prev=temp;
    return temp;
}
void print(Node* head){
    while(head != nullptr){
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
    cout<<"Before:\n";
    print(head);
    head = insert_at_head(head,5);
    cout<<"\nAfter:\n";
    print(head);
}