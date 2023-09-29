/*
Activity: BMI calculator
Description: Using cmath library for power function; usage of if-else statements
*/

#include <iostream> //include header library for cout
#include <cmath> //include library for power function

using namespace std;

int main(){

    char name[20];//variable 1
    int input;//variable 2
    float height;//variable 3
    float weight;//variable 4
    float result;//variable 5


    cout << "What's your name?   ";
    cin >> name;//assigning value to variable name
    cout << "Hello,"<<name<<". This is a simple BMI calculator.\nWould you like to try the sample?\n";
    cout << "1 - Yes\n";
    cout << "2 - No";
    cout << "\nYour answer:   ";
    cin >> input;

    if (input == 1){
        cout<<"Enter your height(in meters):   ";
        cin>>height; //inputting value in variable height

        cout<<"Enter your weight(in kilograms):   ";
        cin>>weight;// inputting value in variable weight

        int power = pow(height, 2); //power function allows us to square 
            //power is a variable
             //pow(x,y) is the funtion that takes parameters
             // x is the integer
             // y is the power 

        result = weight/power; // assigning value to result 

        cout<<"Your BMI is: "<<result<<".";

            //using conditions for BMI results
            if (result <= 18.5){
                cout << "\nYou're underweight";
            }
            else if (18.6 < result < 24.99){
                cout << "\nYour BMI is normal";
             }    
            else if (25 < result < 29.29){
                cout << "\nYou're overweight";
            } 
            else{
                cout << "\nYou're obese";
            }
    }
    else if (input == 2){
        cout<<"Okay,"<<name<<". See you next time.";
    }
    else{
        cout << "INVALID";
    }
return 0;
}