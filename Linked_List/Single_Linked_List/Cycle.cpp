#include<bits/stdc++.h>
using namespace std;
class  Node{
  public:
  int data;
  Node* next;
  Node(int x){
    data=x;
    next=nullptr;
  }
};
bool has_cycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
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
    head->next->next->next->next=head->next;
    if(has_cycle(head)){
        cout << "Cycle is present in the linked list\n";
    }
    else{
        cout << "Cycle is not present in the linked list\n";
    }
    return 0;
}