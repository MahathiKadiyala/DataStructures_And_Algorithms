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
int length_of_linked_list(Node* head){
    int cnt=0;
    Node* curr=head;
    while(curr!=nullptr){
        cnt++;
        curr=curr->next;
    }
    return cnt;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout << "Length of linked list: " << length_of_linked_list(head) << endl;
    return 0;
}