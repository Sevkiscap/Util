#include <iostream>
#include <string>
using namespace std;


// Structure of a Node
class Node
{
    Node* prev;
    int data;
    Node* next;
};

class CircularLinkedList
{
    Node* head;
    CircularLinkedList() { head = new Node(); };
    CircularLinkedList(int a) {
        head = new Node();
        head.data = a;
    }

};