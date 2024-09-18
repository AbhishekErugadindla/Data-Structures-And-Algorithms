#include <bits/stdc++.h>
using namespace std;

class Stack {

public:
    int capacity;
    int *arr;
    int top;
    Stack(int capacity) {
         //Write your code here...
         this->capacity = capacity;
         arr = new int[capacity];
         top=-1;
    }
    
    ~Stack(){
        delete[] arr;
    }

    int push(int num) {
         //Write your code here...
         if(top<capacity-1){
             arr[++top] = num;
             return 0;
         }
          return -1;
         
    }

    int pop() {
         //Write your code here...
         if(top==-1) return -1;
         return arr[top--];
    }

    int topElement() {
         //Write your code here...
         if(top==-1) return -1;
         return arr[top];
    }

    bool empty() {
         //Write your code here...
         return top==-1;
    }

    bool full() {
         //Write your code here...
         return top==capacity-1;
    }

    int size() {
         //Write your code here...
         return top+1;
    }
};
