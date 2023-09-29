/*
Activity: YouBoughtCoke;RC;Sprite
Description: Using All that was taught in the lesson: Bool; logical statements
Date: September 29,2023

|| - represents (or) which means if you use it as coke||RC, you're referring coke or RC.
&& - represents (and) which means if you use it as coke&&RD, you're referring to coke and RC.

*/

#include <iostream>

using namespace std;

int main ()
{
    bool coke = false;
    bool sprite = false;
    bool RC = true;
    //this boolean should print the else statement

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