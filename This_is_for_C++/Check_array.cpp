/* is_checks whether a variable is an array or not. If it is an array, it will return 1, if it's not, it will return 0.*/

#include <iostream>
#include <string>

using namespace std;

int main()
{ 
    cout << is_array<int>::value; // int has no parameter therefore, it is not an array.
    cout << is_array<int[10]>::value; //int[10] has a parameter which is 0-10, therefore, it is an array. 
    cout << is_array<char[10]>::value; // char[10] has a parameter of 10 therefore it is an array. 
    cout << is_array<string>::value; // string has no parameter therefor it is not an array. 

    return 0;
}