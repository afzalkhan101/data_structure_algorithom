#include<bits/stdc++.h>
using namespace std; 

class Node{
    public:
      int data;
      Node * next = nullptr;
    Node(int value){
        this ->data = value;
        this ->next = nullptr;
    }
};

bool searh_node(Node * head , int key){
    while(head !=nullptr){
        if(head ->data == key){
            return true;
        }
        head = head ->next;
    }

    return false;
}


int main(){

    Node * head = new Node(21);
    head->next = new Node(33);
    head -> next ->next = new Node(23);
    head -> next ->next ->next = new Node(25);
    int m;cin>>m;
    if(searh_node(head,m)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}