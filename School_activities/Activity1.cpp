/*
Activity: simple cout and in
*/

#include <iostream>

using namespace std;

int main ()
{
    char name[20];

    cout << "Hello there, what's your name?";
    cin >> name;
    cout << "Hello,"<<name<<".Welcome!";

    return 0;

}