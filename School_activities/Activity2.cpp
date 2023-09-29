/*
*Activity: Calculating Weekly Allowance, Expenses, Savings
* Date: September 28,2023
*/

#include <iostream>

using namespace std;

int main ()
{
    int allowance_perday;
    int num_days;
    int foodfee_daily;
    int farefee_daily;
    int miscellaneous;

    cout << "CALCULATE WEEKLY ALLOWANCE";

    cout << "\nEnter daily allowance: ";
    cin >> allowance_perday;

    cout << "Enter number of days:  ";
    cin >> num_days;

    int allowance_weekly = allowance_perday*num_days;
    cout << "Your weekly allowance is "<<allowance_weekly<<endl;

    cout << "\nCALCULATE WEEKLY EXPENSES"<<endl;

    cout << "Daily expenses for food fee:  ";
    cin >> foodfee_daily;

    cout << "Daily expenses for fare fee: ";
    cin >> farefee_daily;

    cout << "Daily miscellaneous expenses:   ";
    cin >> miscellaneous;

    int expenses_daily = foodfee_daily + farefee_daily + miscellaneous;
    cout << "\nYour daily expenses is "<<expenses_daily<<endl;
    int expenses_weekly = expenses_daily * num_days;
    cout << "Your weekly expenses is "<<expenses_weekly<<endl;

    cout << "\nCACULATE WEEKLY SAVINGS"<<endl;

    cout << "Weekly allowance: "<<allowance_weekly<<endl;
    cout << "Weekly expenses: "<<expenses_weekly<<endl;

    int weekly_savings = allowance_weekly - expenses_weekly;
    cout << "Your weekly savings is "<<weekly_savings;

    return 0;
}