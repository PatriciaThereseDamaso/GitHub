#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>

using namespace std; 

string Captcha() {
    string captchacode;

        for (int i = 0; i < 6; ++i) {
        char randomChar;

        if (i % 2 == 0) {
            randomChar = rand() % 26 + 'A';
        } else {
            randomChar = rand() % 26 + 'a'; 
        }

        captchacode += randomChar;
        }

    return captchacode;
}

bool isValidContact(const string& contact) {
    return all_of(contact.begin(), contact.end(), ::isdigit);
}

bool isValidEmail(const string& email) {
    size_t atPosition = email.find('@');
    size_t dotPosition = email.find(".com");

    return atPosition != string::npos && dotPosition != string::npos && dotPosition > atPosition;
}

bool Passwordvalidation(const string& password) {
    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (char ch : password) {
        if (isupper(ch)) {
            hasUppercase = true;
        } else if (islower(ch)) {
            hasLowercase = true;
        } else if (isdigit(ch)) {
            hasDigit = true;
        } else if (ispunct(ch)) {
            hasSpecialChar = true;
        }
    }

    return password.length() >= 8 && hasUppercase && hasLowercase && hasDigit && hasSpecialChar;
}

int main() {

    string username, password, highestScorer, contact, email, code;
    int Moneyplayer = 1000, bankerMoney = 10000, playerWins = 0, AmountBET, highestScore = 0;

    while (true) {
        cout << "\nMAIN MENU:\n";
        cout << "[1] SIGN UP\n";
        cout << "[2] SIGN IN\n";
        cout << "[3] EXIT\n";
        cout << "OPTION: ";

        int choice;
        string GeneratedCaptcha;
        cin >> choice;

        switch (choice) {
                case 1: {

                    if (!username.empty()) {
                    cout << "User has already been created. Cannot sign up again.\n";
                    break;
                    }

                    do{
                        cout << "\nEnter your username: ";
                        cin >> username;

                        if (username.length() < 3) {
                            cout << "Invalid username!\n";
                        }

                    }while(username.length() < 3);

                    do{
                    cout << "Enter your password: ";
                    cin >> password;

                        if (!Passwordvalidation(password)) {
                            cout << "Password should be unique.\n";
                        }
                    } while (!Passwordvalidation(password));

                        do {
                            GeneratedCaptcha = Captcha();

                            cout << "\nCaptcha code: " << GeneratedCaptcha <<endl;
                            cout << "Enter the code: ";
                            cin >> code;

                            if (code == GeneratedCaptcha){
                                cout << "\nAccount has been created successfully!\n";
                            }
                            else{
                                cout << "Captcha Code Mismatch. Try Again.\n\n";
                            }
                        }while (code != GeneratedCaptcha);
                    break;
                }

            case 2: {

                string Username, Password;
                do{
                    cout << "\nEnter your username: ";
                    cin >> Username;

                    cout << "Enter your password: ";
                    cin >> Password;
                } while(Username != username && Password != password);

                if (Username == username && Password == password) {
                    cout << "Sign in successful!\n\n";

                    while (true) {
                        cout << "Welcome, " << Username << "!\n";
                        cout << "Let's Play Lucky 9!\n";

                 int pound = 0;

                        for (pound = 0; pound <= 25; pound++){
                                cout << "#";
                        }
                        cout << left << setw(5) << "\n*" << setw(15) << "LUCKY 9" << right << setw(8) <<"*\n";
                        cout << left << setw(5) << "*" << setw(15) << "[1] New Game" << right << setw(7) << "*\n";
                        cout << left << setw(5) << "*" << setw(15) << "[2] Profile" << right << setw(7) << "*\n";
                        cout << left << setw(5) << "*" <<  setw(15) << "[3] Leaderboards" << right << setw(6) << "*\n";

                        for (pound = 0; pound <= 25; pound++){
                                cout << "#";
                        }

                        cout << "\n\nOPTION: ";

                        int SBChoice;
                        cin >> SBChoice;

                        switch (SBChoice) {
                            case 1:{
                                
                                while (Moneyplayer !=0 || bankerMoney != 0){
                                cout << setw(25) << "Playing Lucky 9\n";

                                cout << left << setw(15) << "Player's Name: " << left << setw(10) << Username << left << setw(20) << "Banker's Name : FEU TECH\n";
                                cout << left << setw(15) << "Your Money: $" << left << setw(10) << Moneyplayer <<left << setw(20) << "Banker's Money: $" << left << setw(10) << bankerMoney << "\n";
                                cout << "BET: $";
                                cin >> AmountBET;

                                if (AmountBET <= 0 || AmountBET > Moneyplayer || AmountBET > bankerMoney) {
                                    cout << "Invalid bet amount. Try again. \n";
                                }

                                // Draw 2 cards for player and banker
                                int playerCard1 = rand() % 9 + 1;
                                int playerCard2 = rand() % 9 + 1;
                                int bankerCard1 = rand() % 9 + 1;
                                int bankerCard2 = rand() % 9 + 1;

                                int playerTotal = playerCard1 + playerCard2;
                                int bankerTotal = bankerCard1 + bankerCard2;

                                cout << "Your cards: " << playerCard1 << " and " << playerCard2 << "\n";
                                cout << "Banker's cards: " << bankerCard1 << " and " << bankerCard2 << "\n";

                                // Determine result: WIN, LOSE, DRAW
                                if (playerTotal > bankerTotal) {
                                    cout << "PLAYER WINS!\n\n";
                                    Moneyplayer += AmountBET;
                                    bankerMoney -= AmountBET;
                                    playerWins++;

                                        if (playerWins > highestScore) {
                                            highestScore = playerWins;
                                            highestScorer = username;
                                        }
                                } else if (playerTotal < bankerTotal) {
                                    cout << "PLAYER LOSES!\n\n";
                                    Moneyplayer -= AmountBET;
                                    bankerMoney += AmountBET;

                                } else {
                                    cout << "It's a DRAW!\n\n";
                                }
                                if (Moneyplayer <= 0 || bankerMoney <= 0) {
                                    cout << "GAME OVER!\n\n";
                                    cout << "TOTAL WINS: " << playerWins << "\n\n";
                                }
                                }
                                break;
                            }
                            case 2:{
                                cout << "\nPROFILE:\n";
                                cout << "Username: " << username << "\n";
                                cout << "Password: ";

                                for (char ch : password) {
                                    cout << '*';
                                }
                                
                                cout << "\n";

                                cout << "Enter your contact information (digits only): ";
                                cin >> contact;

                                if (isValidContact(contact)) {
                                    cout << "Contact updated!\n";
                                } else {
                                    cout << "Invalid contact format! Please enter digits only.\n";
                                }

                                do {
                                    cout << "Enter your email address (should be @gmail.com): ";
                                    cin >> email;
                                } while (!isValidEmail(email));

                                cout << "Email updated!\n";
                                break;
                            }
                            case 3:{
                                cout << setw(25) << "LEADERBOARDS\n\n";

                                cout << right << setw(15) << "NAME" << right << setw(15) << "WIN\n";
                                cout  << right << setw(15) << highestScorer << right << setw(15) << highestScore <<endl;
                                break;
                            }
                            default:
                                cout << "Please enter a valid option.\n\n";
                        }
                    }
                } else {
                    cout << "Invalid username or password! Please try again.\n\n";
                }

                break;
            }
            case 3:
                cout << "Exiting program!\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}
