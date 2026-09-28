#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
int countNodesinLoop(Node *head) {
        Node *slow = head;
        Node *fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                int cnt = 1;
                fast = fast->next;

                while(fast != slow)
                {
                    cnt++;
                    fast = fast->next;
                }

                return cnt;
            }
        }
        return 0;   // No loop
    }
int main()
{
    // Create nodes
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Create loop: 5 -> 3
    fifth->next = third;

    cout << "Length of Loop = " << countNodesinLoop(head);

    return 0;
}