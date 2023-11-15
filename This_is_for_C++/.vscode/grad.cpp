/*
Program: Grade Calculator
Description: Using all knowledge from mod 1 to 4
Date: October 20, 2023
*/

#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>

using namespace std;

class student_profile
{
    public:
        string name;
        string birthday;
        int student_no;
        string section;
        string course;
        string year_level;

    student_profile(string Name, string Birthday, int student_No, string Section, string Course, string Year_level)
    {
        name = Name;
        birthday = Birthday;
        student_no = student_No;
        section = Section;
        course = Course;
        year_level = Year_level;
    }

};
    
int main()
{
    student_profile recordArray[1] = {student_profile("Patricia Therese P. Damaso","December 10, 2004", 202310778, "TN08" , "BSCSSE", "1st year")};
    
    cout << "Student Number";

return 0;
}