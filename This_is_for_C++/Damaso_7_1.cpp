/*
Activity: Temperature converter using funtion
Date: November 14, 2023
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float Celsius_to_farenheit(float c){
    float f;
    f = (c*9/5)+32;
    return f;
}

float Farenheit_to_celsius(float f){
    float c;
    c = (f-32)*9/5;
    return c;
}

float celsius_to_kelvin(float c){
    float k;
    k = c + 273.15;
    return k;
}

int main(){
    int choice = 1;
    char Continue = 'N';

    do{
        cout << left << setw(50) << "******************************************************************************** " <<endl;
        cout << setw(25) << " " << setw(25) <<"TEMPERATURE CONVERTER" <<endl;
        cout << left << setw(50) << "******************************************************************************** " <<endl;
        cout << setw(25) << " " <<setw(25) << "[1] - Celsius to Farenheit" <<endl;
        cout << setw(25) << " " <<setw(25) << "[2] - Farenheit to celsius" <<endl;
        cout << setw(25) << " " <<setw(25) << "[3] - Celsius to Kelvin" <<endl;
        cout << left << setw(50) << "******************************************************************************** " <<endl;
        cout << "Choose Option: ";
        cin >> choice;

        switch (choice){
            case 1: {
                    float c, f;
                    cout << "Enter temperature in Celsius: ";
                    cin >> c;

                    f = Celsius_to_farenheit(c);
                    cout << c << " degree Celsius is " << f << " degree Farenheit" <<endl <<endl;
                    cout << "Do you want to continue[Y/N]?";
                    cin >> Continue;
                    break;   
            }
            case 2: {
                float c, f;
                cout << "Enter temperature in farenheit: ";
                cin >> f;

                c = Farenheit_to_celsius(f);
                cout << f << " degree Farenheit is " << c << " degree Celsius"<<endl <<endl;
                cout << "Do you want to continue[Y/N]?";
                cin >> Continue;
                break;
            }
            case 3: {
                float c, k;
                cout << "Enter temperature in Celsius";
                cin >> c;

                k = celsius_to_kelvin(c);
                cout << c << " degree Celsius is " << k << " Kelvin" <<endl <<endl;
                cout << "Do you want to continue[Y/N]?";
                cin >> Continue;
                break;
            }
            default:
                cout << "Invalid choice";

        }

    } while (Continue != 'N' && Continue != 'n');

    return 0;
}