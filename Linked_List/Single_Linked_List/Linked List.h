#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(nullptr) {}
};

struct LinkedList {
    ListNode* head = nullptr;

    void insertAtEnd(int val) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        ListNode* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    void insertAtBeginning(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }

    void deleteNode(int val) {
        if (head == nullptr) return;
        if (head->data == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        ListNode* curr = head;
        while (curr->next && curr->next->data != val) {
            curr = curr->next;
        }
        if (curr->next) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
    }

    void display() {
        ListNode* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

#endif