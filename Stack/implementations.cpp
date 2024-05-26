#include <iostream>
#include "data.h"

using namespace std;

void DynIntStack::push (int data){
    Node *newNode = new Node;
    newNode->data = data;

    if (isEmpty()){
        top = newNode;
        newNode->next = NULL;
    }
    else{
        newNode->next = top;
        top = newNode;
    }
}

void DynIntStack::pop(int &data){
    Node *temp;

    if (isEmpty()){
        cout << "Stack is empty.\n";
    }
    else{
        data = top->data;
        temp = top->next;
        delete top;
        top = temp;
    }
}

bool DynIntStack::isEmpty(){
    bool status;

    if (!top){
        status = true;
    }
    else{
        status = false;
    }
    return status;
}

bool DynIntStack::isFull(){
    Node *newNode;

    try{
        newNode = new Node;
        delete newNode;
        return false;
    }
    catch (bad_alloc){
        return true;
    }
}

void DynIntStack::display(){
    Node *temp = top;

    if(isEmpty()){
        cout << "Stack is Empty\n";
    }
    else{
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}