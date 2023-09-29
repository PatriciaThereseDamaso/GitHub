/*
Activity: Print all odd numbers from 0 to 30 
Description: Usage of For Loop; nested if-else statements

Format:

for (iteration bounds)

    if (condition)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n = 1;

    for ( n= 1; n<=30; n++)
    {
        if (n % 3 == 1){
            continue;
            n++;
        }
        else
        {
            n++;
        }
    cout << n <<endl;
    }

    return 0;
}