#include <bits/stdc++.h>
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
int main(){
    Node* head = new Node(10);
    cout << head->data;
    return 0;
}