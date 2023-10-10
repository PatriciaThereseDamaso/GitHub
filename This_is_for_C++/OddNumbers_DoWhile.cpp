/*
Activity: Print all multiples of 3 numbers from 1 to 30
Description: Using Do-while loop

format 
Do
    (code)
while (condition)
*/

#include <iostream>

using namespace std;

int main(){
    int num = 1;
    do
    {
        if (num % 3 ==0){
            cout << num << "\n";
            num++;
        }
        else{
            num ++;
        }
    }
    while (num <= 30);

    return 0;
}