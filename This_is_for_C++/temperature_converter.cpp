#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
float temp_f;
float temp_c;
float k;

    cout << setprecision(15)<< "" << "**************TEMPERATURE CONVERTER**************"<< endl << endl;
    cout << "Enter temperature in Farenheit: ";
    cin >> temp_f;

    temp_c = ((temp_f - 32)*(5/9));
    cout << endl << "Degree Celcius Equivalent: "<<temp_c << endl;

    k = (temp_c + 273.15);
    cout << "Kelvin Equivalent: " << fixed << setprecision(3)<< k << endl;

return 0;
}