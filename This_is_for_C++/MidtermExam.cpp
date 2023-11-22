#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits> // Include for numeric_limits
#include <algorithm>
#include <vector>

using namespace std;

//personal information
int personal_information(){
    string name, email, course, yearlev, contact;
    int student_number, ID;

    cout << "Student Profile" << endl;
    cout << left << setw(20) << "Student ID: ";
    cin >> ID;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clears the buffer

    cout << left << setw(20) << "Name: ";
    getline(cin, name);

    cout << left << setw(20) << "Course: ";
    getline(cin, course);

    cout << left << setw(20) << "Year level: ";
    getline(cin, yearlev);

    cout << left << setw(20) << "Contact Number: ";
    getline(cin, contact);

    cout << left << setw(20) << "Email: ";
    getline(cin, email);

    return 0;
}

//formula for getting the average of long quiz
float Avglongquiz(float a, float b, float c){
    float average;
    average = (a+b+c)/3;
    return average ;
}
//formula for getting the average of shortquiz
float Avgshortquiz(float a, float b, float c){
    float average;
    average = (a+b+c)/3;
    return average ;
}
//formula for getting the average of SAR
float AvgSAR(float recit, float assign, float seatw){
    float average;
    average = (recit+assign+seatw)/3;
    return average ;
}
//formula for getting the percent of Class standing in Lecture
float PercentCS(float averageLq, float averageSq, float SAR, float TE){
    float PercentCS;
    PercentCS = ((averageLq * 0.5) + (averageSq * 0.2) + (SAR * 0.2) + (TE * 0.1))*0.6;
    return PercentCS;
}
//formula for getting the percent of Midterm exam in Lecture
float PercentME(float grade){
    float MEgrade;
    MEgrade = grade * 0.4;
    return MEgrade;
}
//formula for getting the percent of Lecture Midterm Grade
float Lecture_MG(float PercentCS, float PercentME){
    float Lecgrade;
    Lecgrade = (PercentCS + PercentME)*0.7;
    return Lecgrade;
}
//formula for getting the average of machine problems
float Avgmachine_problem(float a, float b, float c){
    float average;
    average = (a+b+c)/3;
    return average;
}
//formula for getting the average of Lab exercises
float Avglab_exercises(float a, float b, float c){
    float average;
    average = (a+b+c)/3;
    return average;
}
//formula for getting the average of SAR in lab
float AvgSARL(float s, float a, float r){
    float average;
    average = (s+a+r)/3;
    return average;
}
//formula for getting the percentage of Class Standing inlab
float PercentCSLAB(float avgMP, float avgLE, float SARL, float TEL){
    float PercentCSLAB;
    PercentCSLAB = ((avgMP * 0.5) + (avgLE * 0.2) + (SARL * 0.2) + (TEL * 0.1))*0.6;
    return PercentCSLAB;
}
//formula for getting the percentage of Midterm Exam in Lab
float PercentMEL(float grade){
    float MELgrade;
    MELgrade = grade * 0.4;
    return MELgrade;
}
//formula for getting the percent for Lab grade
float Lab_MG(float PercentMEL, float PercentCSLAB){
    float Labgrade;
    Labgrade = (PercentMEL + PercentCSLAB) * 0.3;
    return Labgrade;
}
//formula for getting the combined grade percentage of lab and lec
float Combined_grade(float lec, float lab){
    float combinedgrade;
    combinedgrade = lec + lab;
    return combinedgrade;
}

int main() {

    cout << setw(10) << " " << setw(50) << "MIDTERM GRADE CALCULATOR" << endl;

    personal_information(); //calls the funtion personal information

    // defining the variable used for lecture
        float LQ1, LQ2, LQ3, LQTotal , SQ1, SQ2, SQ3, SQTotal, s, a, r, SARtotal, TE , percentCS, ME, percentME, LecMG; // for lecture

    cout << "CCS0003 - LECTURE (70%)" << endl;
    cout << "Class Standing (60%)" << endl << endl;

    cout << "Long Quizzes (50%)" <<endl;
    
    // entering valid input for long quizzes
    // will repeat the process until the condition is met
    
        do{
            cout << left << setw(25) << "Long Quiz 1: ";
            cin >> LQ1;
        } while (LQ1 < 1 || LQ1 > 100);
        
        do{
            cout << left << setw(25) << "Long Quiz 2: ";
            cin >> LQ2;
        } while (LQ2 < 1 || LQ2 > 100);

        do{
            cout << left << setw(25) << "Long Quiz 3: ";
            cin >> LQ3;
        } while (LQ3 < 1 || LQ3 > 100);

    LQTotal = Avglongquiz(LQ1, LQ2, LQ3); // calling the function and assigning the function's formula to LQTotal

    cout << left << setw(25) << "Average Long Quizzes: " << fixed << setprecision(2) << LQTotal << endl << endl;

    cout << "Short Quizzes (20%)" << endl;
    
     // entering valid input for short quizzes
    // will repeat the process until the condition is met

        do{
            cout << left << setw(25) << "Short Quiz 1: ";
            cin >> SQ1;
        } while (SQ1 < 1 || SQ1 > 100);
        
        do{
            cout << left << setw(25) << "Short Quiz 2: ";
            cin >> SQ2;
        } while (SQ2 < 1 || SQ2 > 100);

        do{
            cout << left << setw(25) << "Short Quiz 3: ";
            cin >> SQ3;
        } while (SQ3 < 1 || SQ3 > 100);

    SQTotal = Avgshortquiz(SQ1, SQ2, SQ3); // calling the function and assigning the function's formula to SQTotal

    cout << left << setw(25) <<"Average Short Quizzes: " << fixed << setprecision(2) << SQTotal << endl << endl;

    cout << "SAR (20%)" <<endl;
    
    // entering valid input for SAR
    // will repeat the process until the condition is met

        do{
            cout << left << setw(25) << "Seatwork: ";
            cin >> s;
        }while (s < 1 || s > 100);

        do{
            cout << left << setw(25) <<"AssignmentL ";
            cin >> a;
        }while (a < 1 || a > 100);

        do{
            cout << left << setw(25) << "Recitation: ";
            cin >> r;        
        }while(r < 1 || r > 100);

    SARtotal = AvgSAR(s,a,r); // calling the function and assigning the function's formula to SARTotal

    cout << left << setw(25) << "Average SAR: " << fixed << setprecision(2) << SARtotal << endl <<endl;

    cout << "Teacher's Evaluation(10%)" <<endl;

    // entering valid input for SAR
    // will repeat the process until the condition is met
        do{
        cout << "Teacher's Evaluation: ";
        cin >> TE;
        }while (TE < 1 || TE > 100);

    percentCS = PercentCS(LQTotal, SQTotal , SARtotal , TE); // calling the function and assigning the function's formula to percentCS

    cout << "Total Class Standing: " << fixed << setprecision(2) << percentCS << "%" <<endl <<endl;

        cout << "Midterm Examination(40%)" <<endl;
        cout << "Midterm Exam: ";
        cin >> ME;

    percentME = PercentME (ME);
    LecMG = Lecture_MG(percentCS,percentME);

    cout << "CCS0003 Midterm Grade: " << LecMG << "%" <<endl <<endl;

    //for laboratory grade

    float MP1, MP2, MP3, MPTotal, LE1, LE2, LE3, LETotal, sL, aL, rL, SARLtotal, TEL, percentCSLAB, MEL, percentMEL, LabMG ;

       cout << "CCS0003l - LABORATORY (30%)" <<endl;
       cout << "Class Standing (60%)" <<endl <<endl;
       cout << "Machine Problems (50%)"<<endl;

       do{
            cout << left << setw(25) << "Machine Problem 1: ";
            cin >> MP1;
        } while (MP1 < 1 || MP1 > 100);
        
        do{
            cout << left << setw(25) << "Machine Problem 2: ";
            cin >> MP2;
        } while (MP2 < 1 || MP2 > 100);

        do{
            cout << left << setw(25) << "Machine Problem 3: ";
            cin >> MP3;
        } while (MP3 < 1 || MP3 > 100);

    MPTotal = Avgmachine_problem(MP1, MP2, MP3);

    cout << left << setw(25) << "Average Machine Problems: " << fixed << setprecision(2) << MPTotal << endl << endl;

    cout << "Lab Exercises (20%)" << endl;
    
        do{
            cout << left << setw(25) << "Lab Exercise 1: ";
            cin >> LE1;
        } while (LE1 < 1 || LE1 > 100);
        
        do{
            cout << left << setw(25) << "Lab Exercise 2: ";
            cin >> LE2;
        } while (LE2 < 1 || LE2 > 100);

        do{
            cout << left << setw(25) << "Lab Exercise 3: ";
            cin >> LE3;
        } while (LE3 < 1 || LE3 > 100);

    LETotal = Avglab_exercises(LE1, LE2, LE3);

    cout << left << setw(25) <<"Average Lab Exercises: " << fixed << setprecision(2) << LETotal << endl << endl;

    cout << "SAR (20%)" <<endl;
    
        do{
            cout << left << setw(25) << "Seatwork: ";
            cin >> sL;
        }while (sL < 1 || sL > 100);

        do{
            cout << left << setw(25) <<"Assignment: ";
            cin >> aL;
        }while (aL < 1 || aL > 100);

        do{
            cout << left << setw(25) << "Recitation: ";
            cin >> rL;        
        }while(rL < 1 || rL > 100);

    SARLtotal = AvgSAR(sL,aL,rL);

    cout << left << setw(25) << "Average SAR: " << fixed << setprecision(2) << SARLtotal << endl <<endl;

    cout << "Teacher's Evaluation(10%)" <<endl;

        do{
        cout << "Teacher's Evaluation: ";
        cin >> TEL;
        }while (TEL < 1 || TEL > 100);

    percentCSLAB = PercentCSLAB(MPTotal, LETotal , SARLtotal , TEL);

    cout << "Total Class Standing: " << fixed << setprecision(2) << percentCSLAB << "%" <<endl <<endl;

        cout << "Midterm Examination(40%)" <<endl;
        cout << "Midterm Exam: ";
        cin >> MEL;

    percentMEL = PercentMEL (MEL);
    LabMG = Lab_MG(percentCSLAB,percentMEL);

    cout << "CCS0003L Midterm Grade: " << LabMG << "%" <<endl <<endl;

    //combined grade
    int CMG;

    CMG = Combined_grade(LabMG, LecMG);
    cout << "Combined Midterm Grade: " << CMG << "%" <<endl;

    if (CMG >= 75 && CMG <= 100){
        cout << "REMARK : PASSED" <<endl;
    }
    else if (CMG < 75 && CMG > 0){
        cout << "REMARK : FAILED"<<endl;
    }
    else {
        cout << "REMARK UNDEFINED"<<endl;
    }

    switch (CMG){
        case 98 ... 100: {
            cout << "Equivalent Grade: 4.00";
            break;
        }
        case 95 ... 97: {
            cout << "Equivalent Grade: 3.75";
            break;
        }
        case 92 ... 94: {
            cout << "Equivalent Grade: 3.50";
            break;
        }
        case 89 ... 91: {
            cout << "Equivalent Grade: 3.25";
            break;
        }
        case 86 ... 88 : {
            cout << "Equivalent Grade : 3.00";
            break;
        }
        case 84 ... 85: {
            cout << "Equivalent Grade : 2.75";
            break;
        }
        case 82 ... 83: {
            cout << "Equivalent Grade : 2.50";
            break;
        }
        case 80 ... 81: {
            cout << "Equivalent Grade : 2.25";
            break;
        }
        case 78 ... 79: {
            cout << "Equivalent Grade : 2.00";
            break;
        }
        case 76 ... 77: {
            cout << "Equivalent Grade : 1.75";
            break;
        }
        case 74 ... 75: {
            cout << "Equivalent Grade : 1.50";
            break;
        }
        case 72 ... 73: {
            cout << "Equivalent Grade : 1.25";
            break;
        }
        case 70 ... 71: {
            cout << "Equivalent Grade : 1.00";
            break;
        }
        case 0 ... 69: {
            cout << "Equivalent Grade : 0.50";
            break;
        }
        deafult : cout << "Equivalent Grade : Undefined";
    }

    return 0;
}
