#include <iostream>

using namespace std;

//structure of Node
struct Node{
    int data;
    Node* next;

};
struct Node* head;

void Insert (int Data){
    Node* newnode = new Node;
    newnode -> data = Data;
    newnode -> next = head;

}

int main(){
    head = NULL;
}