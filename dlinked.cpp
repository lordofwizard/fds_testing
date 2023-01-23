#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;
        Node * prev;
    Node(int x){
        next= NULL;
        prev= NULL;
        data = x;
    }
};

class LinkedList{
    Node * head;
public:
    void add(int x){
        if(head == NULL){
            head = new Node(x);
        }
        else{
            Node * new_node = new Node(x);
            new_node->next = head;
            head = new_node;
            head->prev = new_node;
        }
    }
    void display(){
        Node * temp = head;
        while(temp->next != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void rdisplay(){
        Node * temp = head;
        while(temp ->prev != NULL){
            cout << temp -> data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};


int main(){
    LinkedList ll;
    ll.add(10);
    ll.add(20);
    ll.add(30);
    ll.display();
    ll.rdisplay();
    return 0;
}
