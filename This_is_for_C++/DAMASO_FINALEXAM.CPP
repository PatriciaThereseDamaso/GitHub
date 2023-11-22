#include <iostream>
#include <ctype.h>
#include <stdbool.h>

using namespace std;

string Password();
void signIN();

int main() {
    int option;

    cout << "MAIN MENU" << endl <<endl;
    cout << "[1] SIGN-IN"<<endl;
    cout << "[2] SIGN-UP" <<endl;
    cout << "[3] EXIT" <<endl;
    cout << "OPTION: ";
    cin >> option;

    do{
        switch(option){
            case 2: {
                account();
                break;
            }
            case 1: {
                cout << "Create an account first" <<endl;
                break;
            }
            case 3: {
                cout << "Thank you. Come Again" <<endl;
                break;
            }
            default: {
                cout << "Invalid Option. Try again" <<endl;
            }
        }
    } while (option < 1 && option > 3);

    do{
        switch(option){
            case 2: {
                account();
                break;
            }
            case 1: {
                cout << "ACCOUNT DETAILS" <<endl;
                signIN();
                break;
            }
            case 3: {
                cout << "Thank you. Come Again" <<endl;
                break;
            }
            default: {
                cout << "Invalid Option. Try again" <<endl;
            }
        }
    } while (option < 1 && option > 3);

    return 0;
}    
 
 string account(){
    char userName[20];
    char password[8];

  do{
    cout << "\nEnter User Name: ";
    cin >> userName;
    cin.clear();
    cin.ignore(100, '\n');
  }  while (strlen(userName) < 3 );

    Password();

    return userName;

}

string Password(){

    string password;
    string verify;  

    bool has_upper = false, has_lower = false, has_digit = false, has_punct = false;  
    cout << "Enter password: ";  
    getline(cin, password);  
    for (char c : password) {  
        if (isupper(c)) {  
            has_upper = true;  
        }  
        if (islower(c)) {  
            has_lower = true;  
        }  
        if (isdigit(c)) {  
            has_digit = true;  
        }  
        if (ispunct(c)) {  
            has_punct = true;  
        }  
    }  
    if (has_upper && has_lower && has_digit && has_punct && password.length() >= 8) {  
        cout << "Password is strong." << endl;  
    }  
    else if (has_upper){  
        cout << "Password must contain a lowercase." << endl;  
        cout << "Password must contain a digit." << endl;  
        cout << "Password must contain special characters." << endl;
        cout << "Password must be 8 in length" << endl;    
    }  
    else if (has_lower){
        cout << "Password must contain an uppercase." << endl;  
        cout << "Password must contain a digit." << endl;  
        cout << "Password must contain special characters." << endl;
        cout << "Password must be 8 in length" << endl;    
    }
    else if (has_digit){
        cout << "Password must contain an uppercase." << endl;  
        cout << "Password must contain a lowercase." << endl;  
        cout << "Password must contain special characters." << endl;
        cout << "Password must be 8 in length" << endl;    
    }
    else if (has_punct){
        cout << "Password must contain an uppercase." << endl;  
        cout << "Password must contain a lowercase." << endl;  
        cout << "Password must contain a digit" << endl;
        cout << "Password must be 8 in length" << endl;    
    }
    else if (password.length()>= 8){
        cout << "Password must contain an uppercase." << endl;  
        cout << "Password must contain a lowercase." << endl;  
        cout << "Password must contain a digit" << endl;  
        cout << "Password must contain special characters." << endl;  
    }
    else if (has_upper && has_lower){
        cout << "Password must contain a digit"<<endl;
        cout << "Password must be 8 in length" << endl;  
        cout << "Password must contain special characters." << endl;   
    }
    else if (has_upper && has_digit){
        cout << "Password must contain a lowercase"<<endl;
        cout << "Password must be 8 in length" << endl;  
        cout << "Password must contain special characters." << endl;   
    }
    else if (has_upper && has_punct){
        cout << "Password must contain a lowercase"<<endl;
        cout << "Password must be 8 in length" << endl;  
        cout << "Password must contain a digit" << endl;   
    }
    else if (has_upper && password.length()>=8){
        cout << "Password must contain a lowercase"<<endl;
        cout << "Password must contain a special character" <<endl;
        cout << "Password must contain a digit" << endl;   
    }

    cout << "Confirm Password: ";
    cin >> verify;

    if (verify != password){
        cout << "Password Mismatch"<<endl;
    }
    else{
        captcha();
    }
    return password;
    return verify;

} 

string username(string userNAME){
    string verify;
    verify == userNAME;
    return verify;
}

string verify(){

}

string captcha(){
    string captcha;
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < 6; ++i) {
        char randomChar = rand() % 26 + 'A';
        if (rand() % 2 == 0) {
            randomChar = tolower(randomChar);
        }
        captcha += randomChar;
    }

    return captcha;
}

void signIN(){
    string username, password;
    cout << "Enter Username: ";
    cin >> username;

    username == kjb;
}

    
    