#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>

using namespace std;

class Student_profile
{
    public:
    string student_name;
    string year_level;
    string section;
    string program;
    int student_number;

    Student_profile(string name, int stunum, string year, string prog, string sect)
    {
        student_name = name;
        student_number = stunum;
        year_level = year;
        program = prog;
        section = sect;

    }
};

int main()
{
Student_profile recordArray[10]={Student_profile("Patricia", 202310778, "1st year", "BSCSSE", "TN08" ),
                                    Student_profile("Aaron", 202310766, "1st year", "BSIT", "TK11"),
                                    Student_profile("Gian", 202310780, "1st year" , "BSCSSE", "TN09"),
                                    Student_profile("Jacqueline", 202310556, "1st year", "BSN", "BS04"),
                                    Student_profile("Leerold", 202311089, "1st year", "BSN", "BS04"),
                                    Student_profile("Darlene",202311067, "1st year", "BSN", "BS04"),
                                    Student_profile("Clynette", 202310567, "1st year", "BSN", "BS04"),
                                    Student_profile("Rheeza", 202311368, "1st year", "BSIE", "IE02"),
                                    Student_profile("Jessica", 202309567, "1st year", "BSCE", "CC08"),
                                    Student_profile("Jumaica", 202307890, "1st year", "BSCA", "CA02")};


    cout << left << setw(20) << "Student Name" << left << setw(20) << "Student Number" << left << setw(15) << "Year Level" <<left << setw(10) << "Program" << left << setw(10) << "Section" <<endl;
    

        for (int i = 0; i<=10; i++)
        {
            cout << left << setw(20) << recordArray[i].student_name;
            cout << left << setw(20) << recordArray[i].student_number;
            cout << left << setw(15) << recordArray[i].year_level;
            cout << left << setw(10) << recordArray[i].program;
            cout << left << setw(10) << recordArray[i].section;
            cout << endl;
        }

    return 0;
}
