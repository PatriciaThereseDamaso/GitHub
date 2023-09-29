/*
Activity: If-else statements
Description: Using All that was taught in the lesson: Bool; logical statements
Date: September 29,2023
*/

#include <iostream>

using namespace std;

int main ()
{
    bool coke = true;
    bool sprite = false;
    bool RC = true;

        if (coke&&sprite == true)
        {
            cout << "You bought coke and sprite";
        }
        else if (coke&&RC == true)
        {
            cout << "You bought coke and RC";
        }
        else 
            cout << "You didn't bought anything";

    return 0;

}