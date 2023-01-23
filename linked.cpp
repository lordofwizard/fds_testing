#include <iostream>

class Node{
    public:
        int data;
        Node * next;

    Node(int x){
        this->data = x;
        next = NULL;
    }
    Node(){
        this->data = 0;
        next = NULL;
    }
};

class LinkedList{
    Node * head  = NULL;
    public:
    void add(int x){
        Node * new_node = new Node(x);
        if(head == NULL)
            head = new_node;
        else{
            new_node->next = head;
            head = new_node;
        }
    }
    
    void display(){
        Node * temp = head;
        while(temp != NULL){
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
    void insert_head(int x){
        Node * new_node = new Node(x);
        Node * temp = head;
        head = new_node;
        new_node->next = temp;
    }
    void insert_tail(int x){
        Node * new_node = new Node(x);
        Node * temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void insert_after(int after, int x){
        Node * new_node = new Node(x);
        Node * temp = head;

        while(temp->data != after)temp = temp->next;
        temp = temp->next;
        Node * temp_2 = temp;
        temp->data = new_node->data;
        new_node = temp;
    }
    void search(int item){
        int turn = 0;
        while(head != NULL){
            if(head->data == item){
                std::cout << "found at " << turn + 1<< std::endl;
                return;
            }
            else{
                head=head->next;
            }
            turn += 1;
        }
        std::cout << "Item not present bruh" << std::endl;
    }
};

int main(){
    LinkedList ll;
    ll.add(10);
    ll.add(20);
    ll.add(30);
    ll.add(40);
    ll.display();

    ll.insert_head(1);
    ll.display();

    ll.insert_tail(69);
    ll.display();

    ll.insert_after(30,123123);
    ll.display();

    ll.search(30);
    return 0;
}
