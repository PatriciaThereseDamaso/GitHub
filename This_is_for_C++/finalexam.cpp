#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <limits>
#include <vector>
#include <algorithm>

using namespace std;

void personalinformation();
float Avglongquizzes(float LQ1, float LQ2, float LQ3, float LQ4, float LQ5, float LQ6);
float Avgshortquizzes(float SQ1, float SQ2, float SQ3, float SQ4, float SQ5, float SQ6);
float AvgSARlec(float Slec, float Alec, float Rlec);
float PercentCSLEC(float Avglongquizzes, float Avgshortquizzes, float AvgSARlec, float AvgTElec);
float midtermexamLEC(float MEscore);
float finalexamLEC(float FEscore);
float combinedexamLEC(float MEscore, float FEscore);
float Lecturegrade(float PercentCSLEC, float combinedexamLEC);
float AvgMP(float MP1, float MP2, float MP3, float MP4, float MP5, float MP6);
float AvgLE(float LE1, float LE2, float LE3, float LE4, float LE5, float LE6);
float AvgSARlab(float Slab, float Alab, float Rlab);
float PercentCSLAB(float AvgMP, float AvgLE, float SARlab, float AvgTElab);
float midtermexamLAB(float MEscore);
float finalexamLAB(float FEscore);
float combinedexamLAB(float MEscore, float FEscore);
float Labgrade(float PercentCSLAB, float combinedexamLAB);
float finalgrade(float Lecturegrade, float labgrade);

int main (){

    cout << endl << setw(40) << "FINAL GRADE CALCULATOR" << endl << endl;

    personalinformation(); // calls the function 

    cout << "CCS0003 - LECTURE (70%)"<< endl << endl;
    cout << "Class Standing (60%)"<< endl;
    cout << "Long Quizzes (50%)" << endl;

    //identify the variables to be used in Lecture
    float LQ1, LQ2, LQ3, LQ4, LQ5, LQ6, LQtotal, SQ1, SQ2, SQ3, SQ4, SQ5, SQ6, SQtotal, slec, alec, rlec, SARLECtotal, TElec , CSlec, MELECscore, MELECpercent, FELECscore, FELECpercent, ExamlecCombined, Lecgrade;

           do{

            cout <<left << setw(25) << "Long Quiz 1: ";
            cin >> LQ1;
        } while(LQ1 < 0 || LQ1 > 100);
        
        do{
            cout << left << setw(25) <<"Long Quiz 2: ";
            cin >> LQ2;
        } while(LQ2 < 0 || LQ2 > 100);

        do{
            cout << left << setw(25) << "Long Quiz 3: ";
            cin >> LQ3;
        } while(LQ3 < 0 || LQ3 > 100);

        do{
            cout << left <<setw(25) << "Long Quiz 4: ";
            cin >> LQ4;
        } while(LQ4 < 0 || LQ4 > 100);

        do{
            cout << left << setw(25) << "Long Quiz 5: ";
            cin >> LQ5;
        } while(LQ5 < 0 || LQ5 > 100);

        do{
            cout << left << setw(25) << "Long Quiz 6: ";
            cin >> LQ6;
        } while(LQ6 < 0 || LQ6 > 100);

    LQtotal = Avglongquizzes(LQ1, LQ2, LQ3, LQ4, LQ5, LQ6);
    cout << left << setw(25) << "Average Long Quizzes: " << fixed << setprecision(2) << LQtotal << endl <<endl;

    cout << "Short Quizzes (20%)"<<endl;

        do {
            cout << left << setw(25) << "Short Quiz 1: ";
            cin >> SQ1;
        } while (SQ1 < 0 || SQ1 > 100);

        do {
            cout << left << setw(25) << "Short Quiz 2: ";
            cin >> SQ2;
        } while (SQ2 < 0 || SQ2 > 100);

        do {
            cout << left << setw(25) << "Short Quiz 3: ";
            cin >> SQ3;
        } while (SQ3 < 0 || SQ3 > 100);

        do {
            cout << left << setw(25) << "Short Quiz 4: ";
            cin >> SQ4;
        } while (SQ4 < 0 || SQ4 > 100);

        do {
            cout << left << setw(25) << "Short Quiz 5: ";
            cin >> SQ5;
        } while (SQ5 < 0 || SQ5 > 100);

        do {
            cout << left << setw(25) << "Short Quiz 6: ";
            cin >> SQ6;
        } while (SQ6 < 0 || SQ6 > 100);

    SQtotal = Avgshortquizzes(SQ1, SQ2, SQ3, SQ4, SQ5, SQ6);
    cout << left << setw(25) << "Average Short Quizzes: "<< fixed << setprecision(2) <<SQtotal << endl <<endl;

    cout << "SAR(20%)"<<endl;

        do {
            cout << left << setw(25) << "Seatwork: ";
            cin >> slec;
        } while (slec < 0 || slec > 100);


        do {
            cout << left << setw(25) << "Assignments: ";
            cin >> alec;
        } while (alec < 0 || alec > 100);

        do {
            cout << left << setw(25) << "Recitation: ";
            cin >> rlec;
        } while (rlec < 0 || rlec > 100);

    SARLECtotal = AvgSARlec(slec,alec,rlec);
    cout << left << setw(25) << "Average SAR: " << fixed << setprecision(2) << SARLECtotal << endl << endl;

    cout << "Teacher's Evaluation (10%)" <<endl;
    cout << left << setw(25)<< "Teacher's Evaluation: ";
    cin >> TElec;

    CSlec = PercentCSLEC(LQtotal, SQtotal, SARLECtotal, TElec);
    cout << endl << left << setw(25) << "Total Class standing: " << fixed << setprecision(2) <<CSlec <<endl <<endl;

    cout << "Examination Grade(40%)"<<endl;

    cout << "Midterm Exam (15%)"<<endl;
        do {
            cout << left << setw(25) << "Midterm Exam: ";
            cin >> MELECscore;
        } while (MELECscore < 0 || MELECscore > 100);

    MELECpercent = midtermexamLEC(MELECscore);

    cout << endl << "Final Exam(25%)"<<endl;
        do {
            cout << left << setw(25)<<"Final Exam: ";
            cin >> FELECscore;
        } while (FELECscore < 0 || FELECscore > 100);
    
    FELECpercent = finalexamLEC(FELECscore);
    ExamlecCombined = combinedexamLEC(FELECpercent, MELECpercent);

    cout << left << setw(25) << "Examination grade: " << fixed <<setprecision(2) << ExamlecCombined <<endl <<endl;

    Lecgrade = Lecturegrade(ExamlecCombined, CSlec);

    cout << left <<setprecision(2) << "CCS0003 - LECTURE Final Grade: " << fixed << setprecision(2) << Lecgrade <<endl <<endl;

    //identify variables for the Laboratory
    float MP1, MP2, MP3, MP4, MP5, MP6, MPtotal, LE1, LE2, LE3, LE4, LE5, LE6, LEtotal, slab, alab, rlab, SARLABtotal, TElab, CSlab, MELABscore, MELABpercent, FELABscore, FELABpercent, ExamlabCombined, LABgrade; 

    cout << "CCS0003L - LABORATORY (30%)"<<endl;
    cout << "Class Standing(60%)"<<endl;
    cout << "Machine Problems(50%)"<<endl;

        do {
            cout << left << setw(25) << "Machine Problem 1: ";
            cin >> MP1;
        } while (MP1 < 0 || MP1 > 100);

        do {
            cout << left << setw(25) << "Machine Problem 2: ";
            cin >> MP2;
        } while (MP2 < 0 || MP2 > 100);

        do {
            cout << left << setw(25) << "Machine Problem 3: ";
            cin >> MP3;
        } while (MP3 < 0 || MP3 > 100);

        do {
            cout << left << setw(25) << "Machine Problem 4: ";
            cin >> MP4;
        } while (MP4 < 0 || MP4 > 100);

        do {
            cout << left << setw(25)<< "Machine Problem 5: ";
            cin >> MP5;
        } while (MP5 < 0 || MP5 > 100);

        do {
            cout << left << setw(25) << "Machine Problem 6: ";
            cin >> MP6;
        } while (MP6 < 0 || MP6 > 100);

    MPtotal = AvgMP(MP1, MP2, MP3, MP4, MP5, MP6);
    cout << left << setw(25) << "Average Machine Problems: " << fixed << setprecision(2)<<MPtotal<< endl <<endl;

    cout << "SAR(20%)" << endl;

        do {
            cout << left << setw(25) << "Seatwork: ";
            cin >> slab;
        } while (slab < 0 || slab > 100);

        do {
            cout << left << setw(25) << "Assignment: ";
            cin >> alab;
        } while (alab < 0 || alab > 100);

        do {
            cout << left << setw(25) <<  "Seatwork: ";
            cin >> rlab;
        } while (rlab < 0 || rlab > 100);
    
    SARLABtotal = AvgSARlab(slab, alab, rlab);
    cout << left << setw(25) << "Average SAR: " << fixed << setprecision(2) << SARLABtotal << endl <<endl;

    cout << "Teacher's Evaluation(10%)"<<endl;
    cout << left << setw(25) << "Teacher's Evaluation: ";
    cin >> TElab;

    CSlab = PercentCSLAB(MPtotal, LEtotal, SARLABtotal, TElab);
    cout << left << setw(25) << "Total Class Standing: " << fixed << setprecision(2) << CSlab << endl <<endl;

    cout << "Examination Grade(40%)" <<endl;
    cout << "Midterm Practical Exam(15%)" <<endl;

        do {
            cout << left << setw(25) << "Midterm practical exam: ";
            cin >> MELABscore;
        } while (MELABscore < 0 || MELABscore > 100);

    MELABpercent = midtermexamLAB(MELABscore);
    
    cout << endl << "Final Practical Exam(25%)"<<endl;
        do {
            cout << left << setw(25) << "Final practical exam: ";
            cin >> FELABscore;
        } while (FELABscore < 0 || FELABscore > 100);

    FELABpercent = finalexamLAB(FELABscore);
    ExamlabCombined = combinedexamLAB(FELABpercent, MELABpercent);

    cout << left << setw(25) << "Examination grade: " << fixed <<setprecision(2) << ExamlabCombined <<endl <<endl;

    LABgrade = Labgrade(CSlab, ExamlabCombined);

    cout << left <<setprecision(2) << "CCS0003 - LABORATORY Final Grade: " << fixed << setprecision(2) << LABgrade <<endl <<endl;

    int FinalGrade = finalgrade(Lecgrade, LABgrade);

    cout << left << setw(25) << "Combined Final Grade: " << fixed << setprecision(2) << FinalGrade << endl;

    if (FinalGrade >= 70 && FinalGrade <= 100){
        cout << "Remark : PASSED" <<endl;
    }
    else if (FinalGrade < 70 && FinalGrade >= 0){
        cout << "Remark : FAILED"<<endl;
    }
    else {
        cout << "Remark : Cannot Be determined" <<endl;
    }

    switch (FinalGrade){
        case 98 ... 100:{
            cout << "Equivalent Grade: 4.00";
            break;
        }
        case 95 ... 97:{
            cout << "Equivalent Grade: 3.75";
            break;
        }
        case 92 ... 94:{
            cout << "Equivalent Grade: 3.50";
            break;
        }
        case 89 ... 91:{
            cout << "Equivalent Grade: 3.25";
            break;
        }
        case 86 ... 88:{
            cout << "Equivalent Grade: 3.00";
            break;
        }
        case 84 ... 85:{
            cout << "Equivalent Grade: 2.75";
            break;
        }
        case 82 ... 83:{
            cout << "Equivalent Grade: 2.50";
            break;
        }
        case 80 ... 81:{
            cout << "Equivalent Grade: 2.25";
            break;
        }
        case 78 ... 79:{
            cout << "Equivalent Grade: 2.00";
            break;
        }
        case 76 ... 77:{
            cout << "Equivalent Grade: 1.75";
            break;
        }
        case 74 ... 75:{
            cout << "Equivalent Grade: 1.50";
            break;
        }
        case 72 ... 73:{
            cout << "Equivalent Grade: 1.25";
            break;
        }
        case 70 ... 71:{
            cout << "Equivalent Grade: 1.00";
            break;
        }
        case 0 ... 69:{
            cout << "Equivalent Grade: 0.50";
            break;
        }
        default:{
            cout << "Equivalent Grade: Cannot Be Determined";
        }

    }
    return 0;
}

void personalinformation(){
    //identify the variables needed for the personal information section of the student
    string name, course, year_level,email, contact;
    int  student_number;
    cout << "Student Profile" << endl;

    cout << left << setw(20) << "Student ID: ";
    cin >> student_number;

     cin.ignore(numeric_limits<streamsize>::max(), '\n');   //this clears the buffer, efficient use for getting inputs using cin and getline()

    cout << left << setw(20) << "Name: ";
    getline(cin, name);

    cout << left << setw(20) << "Course: ";
    getline(cin, course);

    cout << left << setw(20) << "Year level: ";
    getline(cin, year_level);

    cout << left << setw(20) << "Contact Number: ";
    getline(cin,contact);

    cout << left << setw(20) << "Email: ";
    getline(cin, email);

    cout << endl;
}

float Avglongquizzes(float LQ1, float LQ2, float LQ3, float LQ4, float LQ5, float LQ6){
    float average;
    average = (LQ1 + LQ2 + LQ3 + LQ4 + LQ5 + LQ6)/6;
    return average;
}

float Avgshortquizzes(float SQ1, float SQ2, float SQ3, float SQ4, float SQ5, float SQ6){
    float average;
    average = (SQ1 + SQ2 + SQ3 + SQ4 + SQ5 + SQ6)/6;
    return average;
}

float AvgSARlec(float Slec, float Alec, float Rlec){
    float average;
    average = (Slec + Alec + Rlec)/3;
    return average;
}

float PercentCSLEC(float Avglongquizzes, float Avgshortquizzes, float AvgSARlec, float TElec){
    float PercentCSLEC;
    PercentCSLEC = ((Avglongquizzes * 0.5) + (Avgshortquizzes * 0.2) + (AvgSARlec * 0.2) + (TElec * 0.1)) * 0.6;
    return PercentCSLEC;
}

float midtermexamLEC(float MEscore){
    float percentMELEC;
    percentMELEC = MEscore * 0.15;
    return percentMELEC;
}

float finalexamLEC(float FEscore){
    float percentFELEC;
    percentFELEC = FEscore * 0.25;
    return percentFELEC;
}

float combinedexamLEC(float MEscore, float FEscore){
    float percentcombinedexamLEC;
    percentcombinedexamLEC = (MEscore + FEscore);
    return percentcombinedexamLEC;
}

float Lecturegrade(float PercentCSLEC, float combinedexamLEC){
    float lecturegrade;
    lecturegrade = (PercentCSLEC + combinedexamLEC) * 0.7;
    return lecturegrade;
}

float AvgMP(float MP1, float MP2, float MP3, float MP4, float MP5, float MP6){
    float average;
    average = (MP1 + MP2 + MP3 + MP4 + MP5 + MP6)/6;
    return average;
}

float AvgLE(float LE1, float LE2, float LE3, float LE4, float LE5, float LE6){
    float average;
    average = (LE1 + LE2 + LE3 + LE4 + LE5 + LE6)/6;
    return average;
}

float AvgSARlab(float Slab, float Alab, float Rlab){
    float average;
    average = (Slab + Alab + Rlab)/3;
    return average;
}
float PercentCSLAB(float AvgMP, float AvgLE, float SARlab, float AvgTElab){
    float percentCSLAB;
    percentCSLAB = ((AvgMP*0.5)+ (AvgLE*0.2)+(SARlab*0.2)+(AvgTElab*0.1))*0.6;
    return percentCSLAB;
}
float midtermexamLAB(float MEscore){
    float melab;
    melab = MEscore * 0.15;
    return melab;
}
float finalexamLAB(float FEscore){
    float felab;
    felab = FEscore * 0.25;
    return felab;
}
float combinedexamLAB(float MEscore, float FEscore){
    float examlab;
    examlab = MEscore + FEscore;
    return examlab;
}
float Labgrade(float PercentCSLAB, float combinedexamLAB){
    float labgrade;
    labgrade = PercentCSLAB + combinedexamLAB;
    return labgrade;
}
float finalgrade(float Lecturegrade, float labgrade){
    float finalgrade;
    finalgrade = (Lecturegrade*0.7 )+ (labgrade * 0.3);
    return finalgrade;
}