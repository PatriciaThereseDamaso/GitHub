#include <iostream>
#include <limits>

using namespace std;

string seat[2][10] = {{"D2", "S2", "S4", "S6", "CR", "S10", "S12", "S14", "S16", "S18"},
                      {"D1", "S1", "S3", "S5", "S7", "S9", "S11", "S13", "S15", "S17"}};

bool isSeatReserved[2][10] = {false};

void displayBusSeats(const string seat[2][10]);
bool passTypeValidation(char passType);
bool seatConfirmValidation(char ConfrmSR);
void seatConfirm();
string seatReservation(string (&seat)[2][10], char passType);
void regularPassenger(string (&seat)[2][10], string reservation);
char passengerType();

void displayBusSeats(const string seat[2][10]) {
    cout << "Seat Reservation System\n";
    cout << "-----------------------\n";
    cout << "Bus Seat # Reservation Chart\n";
    cout << "   |    ------------------------------------------- \n";
    cout << "   v   | [D2] [2] [4] [6] [CR] [10] [12] [14] [16] |          ------ \n";
    cout << "        -------------------------------------------          |      | \n";
    cout << "                                                             | [18] | \n";
    cout << "         -----------------------------------------           |      | \n";
    cout << " [D1]   | [1] [3] [5] [7] [9] [11] [13] [15] [17] |          |  BR  | \n";
    cout << "         -----------------------------------------            ------  \n" << endl;

    cout << "Avaiable Seats: "<<endl<<endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "[" << seat[i][j] << "] ";
        }
        cout << endl;
    }
}

bool passTypeValidation(char passType) {
    return (passType == 'S' || passType == 'R');
}

bool seatConfirmValidation(char ConfrmSR) {
    return (ConfrmSR == 'Y' || ConfrmSR == 'y' || ConfrmSR == 'N' || ConfrmSR == 'n');
}

char seatConfirmation() {
    char ConfrmSR;

    cout << "Would you like to confirm your reservation: ";
    cout << "[Y] - Yes\n[N] - No\n";
    cin >> ConfrmSR;

    return ConfrmSR;
}

void seatConfirm() {
    char ConfrmSR;

    do {
        ConfrmSR = seatConfirmation();

        if (!seatConfirmValidation(ConfrmSR)) {
            cout << "Invalid Input. Try Again\n";
        }

    } while (!seatConfirmValidation(ConfrmSR));

    if (ConfrmSR == 'Y' || ConfrmSR == 'y') {
        cout << "Seat Reserved\n";
    } else {
        cout << "Let us know if you want to reserve a seat.\n";
    }
}

string seatReservation(string (&seat)[2][10], char passType) {
    string ResrvSeat;

    do {
        cout << "Reserve Seat Number: ";
        cin >> ResrvSeat;
        cout << endl;

        bool seatExists = false;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 10; j++) {
                if (seat[i][j] == ResrvSeat) {
                    seatExists = true;

                    if (isSeatReserved[i][j]) {
                        cout << "Seat is already reserved. Choose another seat.\n";
                    } else {
                        isSeatReserved[i][j] = true;  // Mark the seat as reserved
                        if (passType == 'R') {
                            regularPassenger(seat, ResrvSeat);
                        }
                        break;
                    }
                }
            }
        }

        if (!seatExists) {
            cout << "Seat number does not exist.\n";
        }

    } while (true);

    return ResrvSeat;
}

void regularPassenger(string (&seat)[2][10], string reservation, bool (&isSeatReserved)[2][10]) {
    do {
        bool seatExists = false;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 10; j++) {
                if (seat[i][j] == reservation) {
                    seatExists = true;

                    if (isSeatReserved[i][j]) {
                        cout << "Seat is already reserved.\n";
                        return;  // Return to seat reservation
                    }

                    if (i == 0 && j == 0) {
                        cout << "Cannot Reserve a driver's Seat.\n";
                        cin.clear();
                        cin.ignore();
                    } else if ((i == 0 && (j == 1 || j == 2)) || (i == 1 && j == 1)) {
                        cout << "This seat is only reserved for Senior Citizens\n";
                        cin.clear();
                        cin.ignore();
                    } else if (i == 0 && j == 4) {
                        cout << "You can't reserve the restroom.\n";
                        cin.clear();
                        cin.ignore();
                    } else {
                        seatConfirm();
                        isSeatReserved[i][j] = true;  // Mark the seat as reserved
                        return;  // Break out of the loop if the reservation is confirmed
                    }
                }
            }
        }

        if (!seatExists) {
            cout << "Seat number does not exist.\n";
        }

    } while (true);
}

char passengerType() {
    char passType;

    cout << endl << "Type 'S' for Senior and 'R' for Regular\n" << endl;
    cout << "S - Senior\nR - Regular\n" << endl;

    do {
        cout << "Passenger Type: ";
        cin >> passType;
        cout << endl;

        if (!passTypeValidation(passType)) {
            cout << "Invalid Passenger Type. Try Again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (!passTypeValidation(passType));

    return passType;
}

int main() {
    displayBusSeats(seat);
    char passType = passengerType();
    seatReservation(seat, passType);

    return 0;
}


