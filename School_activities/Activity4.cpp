/*
Activity: Western and chinese zodiac sign
Date: OCtober 26,2023
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int month;
    int day;
    int year;

    // header
    cout << left << setw(50) << "*************** HOROSCOPE IDENTIFIER ***************" <<endl;

    //user input for birthday
    cout << "Enter month of Birthday: ";
    cin >> month;
    cout << "Enter day of birthday: ";
    cin >> day;
    cout << "Enter year of birthday ";
    cin >> year;

    switch (month){
        case 1: 
            switch (day){
                case 21 ... 31: cout << "Western zodiac sign for January " <<day << " is Aquarius" <<endl;
                break;
                default: cout << "Western zodiac sign for January " << day << " is Sagittarius" <<endl;
            }
        break;

        case 2: 
            switch (day){
                case 23 ... 29: cout << "Western zodiac sign for February " <<day << "is ";
            }
    }

    return 0;
}