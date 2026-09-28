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
Node* insert_at_head(Node* head,int x){
    Node* temp=new Node(x);
    temp->next=head;
    head=temp;
    return head;
}
void print_list(Node* head){
    Node* curr=head;
    while(curr!=nullptr){
        cout << curr->data << " ";
        curr=curr->next;
    }
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    cout << "Before Insertion:\n";
    print_list(head);
    head = insert_at_head(head, 5);
    cout << "\n\nAfter Insertion:\n";
    print_list(head);
    return 0;
}