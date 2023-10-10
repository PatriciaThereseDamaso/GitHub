#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    //using trunc function
    double x = 1.422, y = 1.500, z = 1.611;
    cout << trunc (x)<<endl;
    cout << trunc (y)<<endl;
    cout << trunc (z)<<endl;

    double a = -1.411, b = -1.500, c = -1.611;
    cout << trunc (a)<<endl;
    cout << trunc (b)<<endl;
    cout << trunc (c)<<endl;

    //using round function
    double d = 1.422, e = 1.500, f = 1.611;
    cout << round (d)<<endl;
    cout << round (e)<<endl;
    cout << round (f)<<endl;

    double ad = -1.411, ae = -1.500, af = -1.611;
    cout << round (ad)<<endl;
    cout << round (ae)<<endl;
    cout << round (af)<<endl;

    return 0;
}