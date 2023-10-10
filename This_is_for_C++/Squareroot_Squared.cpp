/*
Activity: Simple power and square root 
Description: Usage of <cmath> or <math.h> library for power, and <iomanip> library for setprecision
Date: September 29,2023
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()
{
    
    int num;
    int exp;

        cout << "Enter a number:    ";
        cin >> num;
        cout << "Enter exponent:    ";
        cin >> exp;

        float squared = pow(num,exp);
        float sqrroot = sqrt(squared);

        cout << "Squared value :"<<squared<<endl;
        cout << setprecision(3);
        cout << "Square root of value:  "<<sqrroot;

    return 0;
}