/*
Activity: Pythagorean Calculator
Description: Using cmath library for power function ; using squareroot function
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    char name[20];
    int answer;

    cout << "Enter your name:   ";
    cin >> name;
    cout << "Hello,"<<name<<"   this is a pythagorean calculator.";
    cout << "\nChoose your calculator:  \n";
    cout << "1 - hypotenuse\n2 - leg A\n3 - leg B ";
    cout << "\nYour answer:    ";
    cin >> answer;

    float legA;
    float legB;
    float hypotenuse;
    float legA_square;
    float legB_square;
    float hypotenuse_square;
    float result;
    float Result;

        if (answer == 1){// calculating hypotenuse calculator
            cout << "You're now calculating for hypotenuse.\n";

            cout << "Enter length of leg A: ";
            cin >> legA;
            cout << "Enter length of leg B: ";
            cin >> legB;

            legA_square = pow(legA, 2);
            legB_square = pow(legB, 2);

            result = sqrt(legA_square + legB_square);

            Result = (result);
            cout << "Hypotenuse length: "<<result<<"";
        }
        else if (answer == 2){//calculating for leg A
            cout << "You're now calculating for leg A.\n";

            cout << "Enter length of hypotenuse: ";
            cin >> hypotenuse;
            cout << "Enter length of leg B: ";
            cin >> legB;

            legB_square = pow(legB,2);
            hypotenuse_square = pow(hypotenuse,2);

            result = sqrt(legB_square + hypotenuse_square);

            Result = (result);
            cout << "Leg A length:  "<<Result<<"";
        }
        else if (answer == 3){ //calculating for leg B
            cout << "You're now calculating for leg B.\n";

            cout << "Enter length of hypotenuse:    ";
            cin >> hypotenuse;  
            cout << "Enter length of leg A: ";
            cin >> legA;

            legA_square = pow(legA, 2);
            hypotenuse_square = pow(hypotenuse, 2);

            result = sqrt (legA_square + hypotenuse_square);

            Result = (result);
            cout << "Leg B length:  "<<result<<"";
        }
        else{
            cout << "Invalid Input. Try again. ";
            cout << "\nChoose your calculator:  \n";
            cout << "1 - hypotenuse\n2 - leg 1\n3 - leg 3 ";
            cout << "\nYour answer:    ";
            cin >> answer;

        }

        




}