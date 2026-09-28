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
Node* delete_at_tail(Node* head){
    if(head==nullptr){
        return nullptr;
    }
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
void print_list(Node* head){
    Node* curr=head;
    while(curr!=nullptr){
        cout << curr->data << " ";
        curr=curr->next;
    }
    cout << endl;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout << "Before Deletetion:\n";
    print_list(head);
    head=delete_at_tail(head);
    cout << "After Deletion:\n";
    print_list(head);
    return 0;
}
