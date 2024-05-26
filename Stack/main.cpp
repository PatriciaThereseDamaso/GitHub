#include <iostream>
#include "data.h"

using namespace std;

int main(){
    DynIntStack stack;
    int data;

    cout << "Pushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);

    stack.display();

    cout << "\nPopping....\n";
    
    while (!stack.isEmpty()){
        stack.pop(data);
        cout << data << endl;
    }

    return 0;
}