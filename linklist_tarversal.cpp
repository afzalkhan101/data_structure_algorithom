#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
      int data;
      Node * next ;

    Node( int value){
        this->data = value ; 
        this->next = nullptr;
    }
};

void Tarversal(Node * head){
    while(head !=nullptr){
        cout<<head -> data << endl;
        head = head ->next;
    }
}

int main(){
    Node * head = new Node(10);
    head ->next = new Node(20);
    head ->next ->next = new Node(30);
    head ->next ->next->next = new Node(40);
    head ->next ->next->next ->next = new Node(20);
    Tarversal(head);
}
