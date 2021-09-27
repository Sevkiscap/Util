#include <iostream>
#include <string>
using namespace std;


// Structure of a Node
struct Node //class way failed
{
    Node* prev;
    int data;
    Node* next;
    /*Node() {
        int data = NULL;
    }
    Node(int value) {
        this->data = value;
        this->prev = this;
        this->next = this;
    }*/
};

class CircularLinkedList
{
    Node* head;
    CircularLinkedList() {
        head = NULL;
    }
    CircularLinkedList(int value) {
        
        Node* temp = new Node();
        temp->data = value;
        temp->next = temp;
        temp->prev = temp;
        head = temp;
    }
    void Append(int a) {
        
        if (head == NULL) {
            CircularLinkedList(a);
            return;
        }
        Node* last = new Node();
        while (last->next != head) {
            last = last->next;
        }
        Node* added = new Node();
        last->next = added;
        added->prev = last;
        added->data = a;
        added->next = head;
    }
    void Delete(Node* ref) {
        if (ref->next = ref) {
            ref = NULL;
            return;
        }
        Node* temp = new Node();
        temp = ref->prev;
        ref->next = temp->next;
        ref = NULL;
    }


};

