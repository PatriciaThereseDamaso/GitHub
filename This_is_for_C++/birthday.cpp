#include <iostream>
#include <iomanip>
using namespace std;

class Birthday
{
  public:
    string studentName;
    int studentAge;
    int birthDay;
    string birthMonth;
    string birthYear;

    Birthday(string name, int age, int day, string month, string year)
    {
        studentName = name;
        studentAge = age;
        birthDay = day;
        birthMonth = month;
        birthYear = year;
    }
};

int main()
{
    Birthday recordArray[5] = {Birthday("Naman", 20, 13, "January","1999"),
                            Birthday("Divesh", 23, 04, "May","1996"),
                            Birthday("Nitish", 19, 29, "December","2000"),
                            Birthday("Mandeep", 25, 19, "March","1998"),
                               Birthday("Aman", 20, 29, "April","1989")};

    cout << left << setw(10) << "Name" << left << setw(5) << "Age" << left
         << setw(8)<< "Day" << left << setw(10) << "Month"  << left << setw(4) << "Year" << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << left << setw(10) << recordArray[i].studentName
             << left << setw(5) << recordArray[i].studentAge
             << left << setw(8) << recordArray[i].birthDay
             << left << setw(10) << recordArray[i].birthMonth
             << left << setw(4) << recordArray[i].birthYear
            << endl;
    }
    return 0;
}