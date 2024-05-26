#pragma once

using namespace std;

class DynIntStack
{
    private:
        struct Node{
            int data;
            Node* next;
        };

    Node *top;

    public: 
        DynIntStack(){
            top = NULL; 
        }
        void push(int nym);
        void pop(int &num);
        bool isEmpty();
        bool isFull();
        void display();

};