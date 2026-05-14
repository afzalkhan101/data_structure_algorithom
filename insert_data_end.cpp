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


Node* insert_data_end(Node* head, int x){
    Node* new_node = new Node(x);

    if(head == nullptr){
        return new_node;
    }
    
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}

void print_list(Node* head){
    while(head != nullptr){
        cout << head->data << endl;
        head = head->next;
    }
}

Node * remove_node(Node * head , int pos){

    cout<<"EEEEEEEEEEE", pos <<endl;
    if(pos <=1){
        return head;
    }
    int cnt = 1;
    Node * temp = head;

    while(temp != nullptr){
        if(cnt == pos){
            temp->next = temp ->next->next;
        }
        temp = temp - >next;
        cnt++
    }

    return temp;
}

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head ->next->next->next->next = new Node(5);
    head ->next->next->next->next->next = new Node(6);

    head = insert_data_end(head, 33434);

    remove_node(head,2);

    print_list(head);

    return 0;
}