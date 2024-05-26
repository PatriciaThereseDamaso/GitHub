#pragma once

using namespace std;

class Queue{
private:
    struct Node{
        int data;
        Node* next;
    };

Node *front;
Node *rear ;

public:
    Queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int data);
    void dequeue();
    void display();
    bool isempty();
    void showfront();
};


