#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node * next = nullptr;

    Node(int value){
        this ->data = value;
        this ->next = nullptr;
    }
};

int get_size(Node * head){
    int cnt = 0;
    while(head !=nullptr){
        cnt++;
        head = head ->next;
    }

    return cnt ;
}



int get_mid_data(Node *  head){

    int size = get_size(head);
    int mid_index = size/2 ;
    int cnt = 0;
    Node * mid_node ;

    while(head !=nullptr){
        if(cnt == mid_index){
          mid_node = head;
        }
        head = head ->next;
    }
    return mid_node;
    
}

