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
        cout << head->data;

        if(head->next != nullptr){
            cout << " -> ";
        }

        head = head->next;
    }
    cout << endl;
}
int size_of_list(Node * head){
    int cnt = 0;
    while(head !=nullptr){
        cnt ++;
        head = head ->next;
    }
    return cnt ;
}


Node * remove_node(Node * head , int pos){

    if(pos <=1){
        return head;
    }

    int cnt = 1;
    Node * temp = head;

    while(temp != nullptr){
        if(cnt == pos -1){
            temp->next = temp ->next->next;
        }
        temp = temp ->next;
        cnt++;
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
    cout<<"Before Removing:"<<endl;
    print_list(head);
    cout<<"After Removing:"<<endl;
    int length = size_of_list(head);
    int pos ;cin>>pos;
    
    if(pos <=length){
        for(int i = 0;i<=length;i = i + pos){
            cout<<i<<endl;
            remove_node(head,i);
        }
    }
    print_list(head);
    return 0;
}