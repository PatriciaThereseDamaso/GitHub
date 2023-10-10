#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    cout << left << setw(25) << "" << "**************************CLASS SCHEDULE**************************" << endl << endl;

    cout << left <<setw(15) << "DAY";
    cout << left <<setw(30) << "TIME";
    cout << left <<setw(30) << "COURSE CODE";
    cout << left <<setw(30) << "SECTION";
    cout << left <<setw(15) << "ROOM" << endl;

    cout << left << setw(15) << "Tuesday";
    cout << left << setw(30) << "7:00 - 8:50 AM";
    cout << left << setw(30) << "GED0006";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "ONLINE" << endl;

    cout << left << setw(15) << "";
    cout << left << setw(30) << "10:00 AM - 12:40 PM";
    cout << left << setw(30) << "CCSOO01";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "ONLINE" << endl;

    cout << left << setw(15) << "";
    cout << left << setw(30) << "2:00 - 3:50 PM";
    cout << left << setw(30) << "GED0011";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "ONLINE" << endl << endl;

    cout << left << setw(15) << "Wednesday";
    cout << left << setw(30) << "7:00 - 9:50 AM";
    cout << left << setw(30) << "CCS0003L";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "E609" << endl;

    cout << left << setw(15) << "";
    cout << left << setw(30) << "11:00 - 12:50 PM";
    cout << left << setw(30) << "GED0009";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "E710" << endl;

    cout << left << setw(15) << "";
    cout << left << setw(30) << "1:00 - 3:50 PM";
    cout << left << setw(30) << "GED0004";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "F1105" << endl << endl;

    cout << left << setw(15) << "Friday";
    cout << left << setw(30) << "7:00 - 8:50 AM";
    cout << left << setw(30) << "GED0006";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "ONLINE" << endl;

    cout << left << setw(15) << "";
    cout << left << setw(30) << "10:00 AM - 12:40";
    cout << left << setw(30) << "CCS0003";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "ONLINE" << endl;

    cout << left << setw(15) << "";
    cout << left << setw(30) << "1:00 - 3:50 PM";
    cout << left << setw(30) << "GED0011";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "ONLINE" << endl << endl;

    cout << left << setw(15) << "Saturday";
    cout << left << setw(30) << "7:00 - 9:50 AM";
    cout << left << setw(30) << "CCS0001L";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "E609" << endl;

    cout << left << setw(15) << "";
    cout << left << setw(30) << "11:00 - 12:50 PM";
    cout << left << setw(30) << "GED0009";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "E710" << endl;

    cout << left << setw(15) << "";
    cout << left << setw(30) << "1:00 - 3:50 PM";
    cout << left << setw(30) << "GED0004";
    cout << left << setw(30) << "TN08";
    cout << left << setw(15) << "F1105" << endl << endl;
return 0;
}