#include <iostream>

using namespace std;

int main ()
{
    int n = 1;

    for (n = 3;n<=30;n++)
    {
        
        if (n % 3 == 1){
            continue;
        }

    cout << n <<endl;
    }
}