#include <iostream>

using namespace std;

int main()
{
    int number = 1;

    for (number = 1;number <=20; number ++){

        if (number %2 ==0){
            continue;
        }
    cout << number<<endl;
    }

    return 0;

}