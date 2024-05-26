#include <iostream>
#include "data.h"

using namespace std;

bool Queue::isempty(){
    if(front == NULL && rear == NULL){
        return true;
    }
}

void Queue::enqueue(int data){
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if (front == NULL){
        front = temp;
        rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}

void Queue::dequeue(){
    if(isempty()){
        cout << "Queue is empty\n";
    }
    else if (front == rear){
        free(front);
        front = rear = NULL;
    }
    else{
        Node *temp = front;
        front = front->next;
        free(temp);
    }
}

void Queue::showfront(){
    if(isempty){
        cout << "Queue is empty\n";
    }
    else{
        cout << front->data << endl;
    }
}

void Queue::display(){
    if (isempty()){
        cout << "Queue is empty\n";
    }
    else {
        Node *temp = front;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

