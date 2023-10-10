/*Include hypot function to calculate hypotenuse*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float leg_x, leg_y, result;
    leg_x = 10.4;
    leg_y = 5.4;
    result = hypot (leg_x, leg_y);
    cout << "Hypotenuse is equal to: " << fixed << setprecision(2) << result;

    return 0;
}