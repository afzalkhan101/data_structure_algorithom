#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

// Insert at end
Node* insert_data_end(Node* head, int x){
    Node* new_node = new Node(x);

    // If list is empty
    if(head == nullptr){
        return new_node;
    }

    // Traverse to last node
    
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = new_node;

    return head;
}

// Print list
void print_list(Node* head){
    while(head != nullptr){
        cout << head->data << endl;
        head = head->next;
    }
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head = insert_data_end(head, 33434);

    print_list(head);

    return 0;
}