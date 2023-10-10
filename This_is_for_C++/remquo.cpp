// #include <stdio.h>      /* printf */
// #include <math.h>       /* remquo */
// #include <iomanip>      /* setprecision */

// int main ()
// {
//   double numer = 10.3;
//   double denom = 4.5;
//   int quot;
//   double result = remquo (numer,denom,&quot);
//   printf ("numerator: %f\n", numer);
//   printf ("denominator: %f\n", denom);
//   printf ("remainder: %f\n", result);
//   printf ("quotient: %d\n", quot);
//   return 0;
// }

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    float nume = 10.3;
    float deno = 4.5;
    int quot;

    float result = remquo (nume,deno, &quot);
    cout << "Numerator value: "<< setprecision(3) << nume << endl;
    cout << "Denominator value: " << setprecision(3) << deno << endl;
    cout << "Quotient: " <<setprecision(3) << quot << endl;
    cout << "Remainder: " <<setprecision(3) << result << endl;

    return 0;
}