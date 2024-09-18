#include<bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node(int data, Node* next = nullptr) : data(data), next(next) {}
};
*/
class solution {
public:
    Node* top;
    solution() {
        // Write code to initialize top pointer
        top = nullptr;
    }

    void push(int x) {
        // Write code for push operation
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    int pop() {
        // Write code for pop operation
        if(top!=nullptr){
            Node* temp  = top;
            int tempData  = temp->data;
            top= top->next;
            delete temp;
            return tempData;
        }
        return -1;
    }

    int topOp() {
        // Write code for top operation
       if(top!=nullptr) return top->data;
        return -1;
        
    }

    bool empty() {
        // Write code for empty operation
        return top==nullptr;
    }
};
