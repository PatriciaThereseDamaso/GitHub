/*Printing all the odd numbers from 1 to 30 and printing the sum of the odd numbers*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    int num = 1;
    int sum_odd = 0;
    int sum_even = 0;

    do
    { 
        if (num % 2 == 1)
        {
            cout <<num <<endl;
            sum_odd+=num;
            num++;
        }
        else
        {  
            sum_even+=num;
            num++;
        }
    }
    while (num<=30);

 
    cout << "Sum of all odd numbers from 1 to 30 is: "<<sum_odd<<endl;
    cout << "Average: "<<(sum_odd)/15<<endl;
    cout << "Sum of all even numbers from 1 to 30 is: "<<sum_even<<endl;
    cout << "Average: "<<(sum_even)/15<<endl;

    return 0;
}