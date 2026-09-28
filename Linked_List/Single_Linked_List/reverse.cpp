#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int x){
    data=x;
    next=nullptr;
  }
};
Node* reverse(Node* head){
    Node* prev=nullptr;
    Node* curr=head;
    while(curr){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void print(Node* head){
    while(head){
        cout << head->data << " ";
        head=head->next;
    }
}
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    print(head);
    cout << endl;
    head=reverse(head);
    print(head);
    return 0;
}