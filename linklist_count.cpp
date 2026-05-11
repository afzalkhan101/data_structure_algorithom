#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node * next ;
    Node(int value){
        this->data = value ;
        this->next = nullptr;
    }
};

int count_nodes(Node * head){

    int count = 0;
    while(head !=nullptr){
        count = count + 1 ;
        head = head -> next;
    }

    return count;
}

int main(){

    Node *head = new Node(1);
    head -> next = new Node(3);
    head -> next->next = new Node(5);
    head -> next->next->next = new Node(6);
    cout<<count_nodes(head)<<endl;

    return 0;
}