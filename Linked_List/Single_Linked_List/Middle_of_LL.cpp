#include <bits/stdc++.h>
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
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        mover->next = new Node(arr[i]);
        mover = mover->next;
    }
    return head;
}
void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL\n";
}
Node* middleNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    vector<int> arr = {10,20,30,40,50};
    Node* head = convertArr2LL(arr);
    print(head);
    Node* middle = middleNode(head);
    cout << "Middle Node = " << middle->data << endl;
    return 0;
}