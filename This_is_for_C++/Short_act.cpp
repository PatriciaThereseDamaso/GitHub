#include <iostream>
#include <limits>

using namespace std;

int main() {
    char ans;
    
    do {
    int integers[10];
    int x, counter = 0;
    
        cout << "Enter 10 numbers: ";

        for (int i = 0; i < 10; i++) {
            while (!(cin >> integers[i])) {
                cout << "Invalid input. Please enter whole numbers only." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter 10 numbers: ";
            }
        }

        if (cin.peek() != '\n') {
            cout << "Your input exceeded 10 numbers. Please try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "\nEnter a number: ";
        while (!(cin >> x) || cin.peek() != '\n') {
            cout << "Invalid input. Please enter a whole number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nEnter a number: ";
        }

        cout << "\nThe indices of " << x << " are at indices: ";
        for (int i = 0; i < 10; i++) {
            if (integers[i] == x) {
                int index = i;
                cout << index << " ";
                counter++;
            }
        }

        cout << "\nTimes of number " << x << " present in the array: " << counter;

        do {
            cout << "\nTry again? [Y/N] ";
            cin >> ans;
            if (!(ans == 'Y' || ans == 'y' || ans == 'N' || ans == 'n')) {
                cout << "Invalid input. Please enter 'Y' or 'N' only." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (!(ans == 'Y' || ans == 'y' || ans == 'N' || ans == 'n'));

    } while (ans != 'N' && ans != 'n');

    return 0;
}

