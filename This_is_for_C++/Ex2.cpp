#include <iostream>
#include <cstring>
#include <limits>
#include <string>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <sstream>

using namespace std;

void title();
void signUP();
void signIN();
void adminMenu();
void userMenu();
string getValidCourse();
bool validateChoice(const std::string& input);
void addBook();
void deleteBook();
void displayBook();
void searchBook();

int main() {
    string choice;
    bool validChoice = false;

    title();
    cout << "\t\t\t[1] SIGN UP" << endl;
    cout << "\t\t\t[2] SIGN IN " << endl;
    cout << "\t\t\t[3] EXIT" << endl;

    while (!(validChoice)) {
        cout << "\nPlease type your selection: ";
        getline(cin, choice);

        if (validateChoice(choice)) {
            validChoice = true;
        }
        else
            cout << "\nUh oh! Invalid selection. Please choose another one.\n";
    }

    int opt = stoi(choice);

    switch (opt) {
    case 1: signUP(); break;
    case 2: signIN(); break;
    case 3:
        cout << "\nThank you for using COA Library Management System!" << endl;
        cout << "\nDEVELOPERS:" << endl;
        cout << "Santos, Marianne Angelika B.\v" << "Letada, Angel A.\v" << "Damaso, Patricia Therese P.\v";
        cout << "Bautista, Kristian David R.\v" << "Facto, Janelle P." << endl;
        break;
    }

    return 0;
}

struct User {
    char name[50], username[50], password[20];
    string course;
};

User users[100]; //array for users
int userCounter = 0; //track kung ilan na nagsign in, tentative eong limit ng users

//password validation
bool validPassword(const string& password) {
    bool hasUpper = false, hasLower = false, hasSymbol = false, hasNum = false;

    for (char c : password) { //converts string to character
        if (isupper(c)) hasUpper = true;
        else if (islower(c))  hasLower = true;
        else if (!isalnum(c)) hasSymbol = true;
        else if (isdigit(c)) hasNum = true;

    }
    bool isValid = hasUpper && hasLower && hasSymbol && hasNum && (password.length() >= 8);
    //for error message kasi ang pangit pag separate sentences lalabas per error. maganda na eong and na lang eong separator.

    if (!isValid) {
        cout << "Password should contain at least ";
        bool firstRequirement = true;

        if (password.length() < 8) {
            cout << "8 characters";
            firstRequirement = false;
        }
        if (!hasUpper) {
            if (!firstRequirement) {
                cout << " and ";
            }
            cout << "1 uppercase character";
            firstRequirement = false;
        }
        if (!hasLower) {
            if (!firstRequirement) {
                cout << " and ";
            }
            cout << "1 lowercase character";
            firstRequirement = false;
        }
        if (!hasSymbol) {
            if (!firstRequirement) {
                cout << " and ";
            }
            cout << "1 special character";
            firstRequirement = false;
        }
        if (!hasNum) {
            if (!firstRequirement) {
                cout << " and ";
            }
            cout << "1 number";
            firstRequirement = false;
        }
        cout << "." << endl;
    }
    return isValid;
}

void signUP() {
    User newUser;
    string confirmpass;

    system("CLS");

    title();

    cout << "SIGN-UP to the COA-LMS\n";
    cout << "\nName: ";
    cin.getline(newUser.name, 50);

    newUser.course = getValidCourse();

    do {
        cout << "\nUsername: ";
        cin.getline(newUser.username, 50);
        if (strlen(newUser.username) < 4) {
            cout << "Uh oh! Username should at least have 4 characters.\n";
        }
    } while (strlen(newUser.username) < 4);

    do {
        cout << "Password: ";
        cin.getline(newUser.password, 20);
    } while (!validPassword(newUser.password));

    do {
        cout << "\nConfirm Password: ";
        getline(cin, confirmpass);

        if (confirmpass != newUser.password) {
            cout << "Uh oh! Password does not match. Please try again.";
        }
        else {
            break;
        }
        cout << endl;
    } while (true);

    users[userCounter++] = newUser; //aadd nya eong new user sa array na users

    cout << "\nYour sign-up to the LMS has been successful!" << endl;

    int choice = 0;

    do {
        cout << "\nWould you like to [1] sign-in, or [2] exit to main menu? ";
        cin >> choice;
        if (choice == 1) {
            system("CLS");
            cin.clear();
            cin.ignore();
            signIN();

        }
        if (choice == 2) {
            system("PAUSE");
            system("CLS");
            cin.clear();
            cin.ignore();
            main();
        }
        else
            cout << "Please choose a valid option only.";
    } while (choice != 1 || choice != 2);

}

void signIN() {
    char username[50], password[50];
    bool found = false;

    system("CLS");

    title();
    cout << "SIGN-IN to the COA-LMS" << endl;

    do {
        cout << "\nUsername: ";
        cin.getline(username, 50);
        cout << "Password: ";
        cin.getline(password, 50);

        if (strcmp(username, "ADMIN") == 0 && strcmp(password, "Borealis134") == 0) {
            found = true;
            cout << "\nSign-In Successful! \n\n";
            system("PAUSE");
            system("CLS");
            adminMenu();
            return;
        }

        bool found = false;

        for (int i = 0; i < userCounter; i++) {
            if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
                found = true;
                cout << "\nSign-In Successful! \n\n";
                system("PAUSE");
                system("CLS");
                cout << "\nWelcome, " << users[i].username << "!" << endl;
                userMenu();
                break;
            }
        }

        if (!found) {
            cout << "\nIncorrect username or password. Please try again." << endl;
        }
    } while (!found);
}

void adminMenu() {
    int choice;

    cout << "\nWelcome, ADMIN!" << endl;

    cout << "\n[1] Add Book" << endl;
    cout << "[2] Delete Book" << endl;
    cout << "[3] Display Book/s" << endl;
    cout << "[4] Search" << endl;
    cout << "[5] Sign-Out" << endl;
    cout << "[6] Exit" << endl;

    cout << "\nType your selection: ";
    cin >> choice;

    switch (choice){
        case 1: addBook(); break;
        case 2: deleteBook(); break;
        case 3: displayBook(); break;
        case 4: searchBook(); break;
        case 5:  break;
    }
}

struct Book {
    string title, author, course;
    int bookID, publicationYear;
    Book* next;
};

Book* head = nullptr; // Global variable for the head of the linked list

void addBook() {
    char choice;

    do {
        system("CLS");

        cout << "\n================================================" << endl;
        cout << "                   ADD BOOK" << endl;
        cout << "================================================" << endl;

        // Create a new book node
        Book* newBook = new Book;
        newBook->next = nullptr;

        cout << "\nBook Title: ";
        cin.ignore();
        getline(cin, newBook->title);

        cout << "Book ID: ";
        cin >> newBook->bookID;

        cout << "Author: ";
        cin.ignore();
        getline(cin, newBook->author);

        cout << "Course: ";
        getline(cin, newBook->course);

        cout << "Publication Year: ";
        cin >> newBook->publicationYear;

        // Validate book details
        if (newBook->title.empty() || newBook->bookID <= 0 || newBook->author.empty() || newBook->course.empty() || newBook->publicationYear <= 0 ) {
            cerr << "\nInvalid book details. Please ensure all fields are filled correctly." << endl;
            delete newBook; // Free allocated memory
            continue; // Skip to the next iteration
        }

        // Add new book to the linked list
        if (head == nullptr) {
            head = newBook;
        } else {
            // Traverse and find the last book 
            Book* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            // Add the new book to the end of the list
            current->next = newBook;
        }

        // Append details to the "library_records.txt" file
        ofstream shelf("library_records.txt", ios::app);
        if (shelf.is_open()) {
            shelf << newBook->title << "," << newBook->bookID << "," << newBook->author << "," << newBook->course << "," << newBook->publicationYear << endl;
            shelf.close();
            cout << "\nBook successfully added!" << endl;
        } else {
            cerr << "\nUnable to open file for writing! Book details not saved." << endl;
            delete newBook; 
            break; 
        }

        cout << "\nDo you want to insert more books? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y');

    displayBook(); // Display all books after adding
}

void deleteBook() {

}
void displayBook() {
    ifstream shelf("library_records.txt");
    if (shelf.is_open()) {
        string line;
        while (getline(shelf, line)) {
            // Split the line into individual fields
            string title, author, course;
            int bookID, publicationYear;
            char comma;
            istringstream iss(line);
            getline(iss, title, ',');
            iss >> bookID >> comma;
            getline(iss, author, ',');
            getline(iss, course, ',');
            iss >> publicationYear;
            // Display the book details
            cout << "Title: " << title << endl;
            cout << "Book ID: " << bookID << endl;
            cout << "Author: " << author << endl;
            cout << "Course: " << course << endl;
            cout << "Publication Year: " << publicationYear << endl;
            cout << endl;
        }
        shelf.close();
    }
    else {
        cerr << "Unable to open file for reading!" << endl;
    }
}

void searchBook() {

}

void userMenu() {
    int choice;

    cout << "\n[1] Borrow" << endl;
    cout << "[2] Return Book" << endl;
    cout << "[3] Borrow History" << endl;
    cout << "[4] Display" << endl;
    cout << "[5] Search" << endl;
    cout << "[6] Sign-Out" << endl;
    cout << "[7] Exit" << endl;

    cout << "\nType your selection: ";
    cin >> choice;
}

string getValidCourse() {
    string course;
    bool isValid = false;

    while (!isValid) {
        cout << "Course (ex.BSCS): ";
        getline(cin, course);

        // Convert input to uppercase for case-insensitive comparison
        transform(course.begin(), course.end(), course.begin(), ::toupper);

        if (course == "BSCS" || course == "BSIT" || course == "BSMMA" || course == "BSCE" || course == "BSME" || course == "BSEE" || course == "BSCPE" || course == "BSECE") {
            isValid = true;
        }
        else {
            cout << "\nInvalid course. Please follow the format and enter courses existing in COA.\n" << std::endl;
        }
    }
    return course;
}

void title() {
    cout << "------------------------------------------------------" << endl;
    cout << "      COLLEGE OF AURORA LIBRARY MANAGEMENT SYSTEM" << endl;
    cout << "------------------------------------------------------" << endl << endl;
}

bool validateChoice(const std::string& input) {
    if (input.length() != 1) {
        return false; // Input length is not 1
    }
    char ch = input[0];
    return (ch == '1' || ch == '2' || ch == '3'); // Check if the character is '1', '2', or '3'
}
