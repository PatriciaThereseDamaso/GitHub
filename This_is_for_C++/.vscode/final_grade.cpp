#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int grades[] = {96, 97, 98, 98, 95, 94};
    int size = 6;
    int sum = 0;
    int avg;

        for (int i = 0; i < size ; i++)
        {
            sum = (sum + grades[i]);
            avg = sum / size;
        }

    cout << "Your average is: " << avg <<endl;

        if (sum <=84)
        {
            cout << "FAILED";
        }
        else
        {
            cout << "PASSED";
        }

    return 0;
}