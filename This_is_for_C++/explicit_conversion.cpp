#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    int res;
    float f1 = 30.75, f2 = 57.5;
    res = f1 + f2;
    cout <<fixed <<setprecision(2) <<float(res);
    cout <<endl << char (res);
    cout <<endl << int (res);
    cout <<endl << bool (res)<<endl;

    return 0;
}