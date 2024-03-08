#include <iostream>
#include <iomanip>
#include <cstring>
#include <limits>

using namespace std;


struct Student{
    int studentID;
    char firstName[50];
    char lastName[50];
    float GPA;
};

void addStudent (Student students [100], int &numStudents){

    if (numStudents >= 100){
        cout << "Cannot add more students. " <<endl;
        return;
    }

    cout << "\nEnter Student ID: ";
    while (!(cin >> students[numStudents].studentID)) {
        cout << "Invalid input.\nEnter a valid student ID : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cin.ignore();
        cout << "\nFirst Name: ";
        
        while (true) {
            cin.getline(students[numStudents].firstName, 50);
            bool firstname = true;
            for (int i = 0; students[numStudents].firstName[i] != '\0'; ++i) {
                if (!isalpha(students[numStudents].firstName[i])) {
                    firstname = false;
                    break;
                }
            }
            if (firstname) {
                break;
            } else {
                cout << "Invalid input. \nEnter a valid first name: ";
            }
        }

    cout << "\nLast Name: ";
    while (true) {
        cin.getline(students[numStudents].lastName, 50);
        bool lastname = true;
        for (int i = 0; students[numStudents].lastName[i] != '\0'; ++i) {
            if (!isalpha(students[numStudents].lastName[i])) {
                lastname = false;
                break;
            }
        }
        if (lastname) {
            break;
        } else {
            cout << "Invalid input. \nEnter a valid last name: ";
        }
    }
    
    cout << "\nEnter a valid GPA between 0.5 and 4.0: ";
    while (true){
        if (cin >> students[numStudents].GPA && students[numStudents].GPA > 0.5 && students[numStudents].GPA <= 4.0) {
            break;
        } else {
            cout << "Invalid input. \nEnter a valid GPA between 0.5 and 4.0: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    
    
    cout << "\nStudent Added Successfully!";
    
    numStudents++;
}

void displayStudents(const Student students[100], int numStudents){
    cout << "--------------------------------------------------------" <<endl;
    cout << "STUDENT ID" << "\t\t" << "NAME" << "\t\t\t\t" << "GPA" << endl;
    cout << "--------------------------------------------------------" <<endl;

    for (int i = 0; i < numStudents; i++) {
        cout << students[i].studentID
             << "\t\t" << students[i].firstName << " " << students[i].lastName
             << "\t\t" << fixed << setprecision(2) << students[i].GPA << endl;
    }
}

float calculateAverageGPA(const Student students[], int numStudents){
    float totalAddGPA = 0.0;
    float averageGPA = 0.0;

    for (int i = 0; i < numStudents; i++){
        totalAddGPA += students[i].GPA;
    }

    averageGPA = totalAddGPA / numStudents;
    
    for ( int i = 0; i < 45 ; i++){
        cout << "-";
    }

    cout << endl <<  "GPA of students: " << setprecision(2) << averageGPA <<endl;

return averageGPA;
}

void findStudentsByLastName(const Student students[], int numStudents, const char lastName[]){
    
    bool found = false;
    cout << "\nStudents with last name " << lastName << ":" <<endl;
    
    cout << "--------------------------------------------------------" <<endl;
    cout << "STUDENT ID" << "\t\t" << "NAME" << "\t\t\t\t" << "GPA" << endl;
    cout << "--------------------------------------------------------" <<endl;
    
    for (int i=0; i < numStudents; i++){
        if (strcasecmp(students[i].lastName, lastName) == 0){
            cout << students[i].studentID
            << "\t\t" << students[i].firstName << " " << students[i].lastName
            << "\t\t" << fixed << setprecision(2) << students[i].GPA << endl;
            
            found = true;
        }
    }
    
    if (!found){
        cout << "\nNo students found with last name: " << lastName << ".";
    }
}

int main() {
    Student students [100];
    int numStudents = 0;
    int choice;
    char ans;
    float average;
    char searchLastName [50];
    
    do {
        cout << "\n------------------------------------" <<endl;
        cout << "STUDENT DATABASE MANAGEMENT SYSTEM" <<endl;
        cout << "------------------------------------" <<endl;
        
        cout << "[1] Add Student" <<endl;
        cout << "[2] Display All Students" <<endl;
        cout << "[3] Calculate Average GPA" <<endl;
        cout << "[4] Find Students by Last Name" <<endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice){
            case 1: 
                addStudent(students, numStudents); 
                break;
            case 2: 
                displayStudents(students, numStudents); 
                break;
            case 3: 
                average = calculateAverageGPA(students, numStudents); 
                break;
            case 4: 
                cin.ignore();
                cout << "\nEnter student's last name: ";
                cin.getline(searchLastName, 50);
                
                findStudentsByLastName(students, numStudents, searchLastName); 
                break;
            default: 
                cout << "\nInvalid input."; 
                break; 
        }
        
        cout << "\nDo you  want to try again? [Y/N]: ";
        cin >> ans;


    } while (numStudents <= 100 && (ans == 'Y' || ans == 'y'));

    return 0;
}