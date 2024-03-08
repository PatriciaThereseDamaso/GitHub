#include <iostream>
#include <limits>

using namespace std;

/* Global declaration for string seats and reservation array*/
string seat[2][10] = {{"D2", "2", "4", "6", "CR", "10", "12", "14", "16", "18"},
                      {"D1", "1", "3", "5", "7", "9", "11", "13", "15", "17"}};

char reserve[2][10] = {};

/*Function declarations
OO NA MARAMI NA FUNCTIONSSS AKO TINAMAD MAGSCROLL!!!*/
void regularPassenger(string (&seat)[2][10], string reservation, char (&reserve)[2][10]);
void seniorPassenger(string (&seat)[2][10], string reservation, char (&reserve)[2][10]);
void displayBusSeats(const string seat[2][10], const char reserve[2][10]);
bool passTypeValidation(char passType);
bool seatConfirmValidation(char ConfrmSR);
char seatConfirmation();
void seatConfirm(char (&reserve)[2][10], int row, int col);
string seatReservation(string (&seat)[2][10], char passType, char (&reserve)[2][10]);
void cancelReservation(char (&reserve)[2][10]);
char passengerType();
void exitProgram();
bool shouldExit = false;

int main() {
    displayBusSeats(seat, reserve);
    /*passing the return value of passenger type to passtype in int main
    then setting passtype as an actual argument for seatreservation function*/
    char passType = passengerType();
    seatReservation(seat, passType, reserve);
    //seatConfirmation();
    return 0;
}

//for displaying the bus
void displayBusSeats(const string seat[2][10], const char reserve[2][10]) {
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

    cout << "Available Seats: \n\n";

//displays the available seats
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            if (reserve[i][j] == 'R') {
                cout << "[R] ";
            } else {
                cout << "[" << seat[i][j] << "] ";
            }
        }
        cout << endl;
    }
//displaying reserved seats
    cout << "\nReserved Seats:";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            if (reserve[i][j] == 'R') {
                cout << "[" << seat[i][j] << "] ";
            }
        }
    }
    cout << "\n";
}

//cancelling seat reservations
void cancelReservation(char (&reserve)[2][10]) {
    char seatToCancel[3];

    cout << "\nReserved Seats:";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            //maglalagay ito ng R sa Index na nareserve ni miss mam
            if (reserve[i][j] == 'R') {
                cout << "[" << seat[i][j] << "] ";
            }
        }
    }
    cout << "\n";

    cout << "\nEnter the seat number you want to cancel (e.g., D1, 8): ";
    cin >> seatToCancel;
//why need ng boolexists? para maverify if kasama yung input ni user na seat sa array.
    bool seatExists = false;
/*ito magstore sa indices kung saan nafound yung seat. Naka-initialize to -1 
kasi ibigsabihin not found pa yung location ng seat.*/
    int row = -1, col = -1;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            if (reserve[i][j] == 'R' && seat[i][j] == seatToCancel) {
                //nagtrue na yung bool seatexists kasi nakita na sa array yung input ni user na seat
                seatExists = true;
                row = i;
                col = j;
                break;
            }
        }
    }

    if (seatExists) {
    /*aalisin nito yung nakalagay na R sa mga seats at ibabalik sa default na laman.*/
        reserve[row][col] = '\0';  // Mark the seat as unreserved
        cout << "Reservation for seat " << seatToCancel << " canceled.\n\n";
    /*tatawagin niya yung displaybusseat kasi doon ipapakita yung mga available seats at yung mga reserved seats*/
        displayBusSeats(seat, reserve);
    } else {
        cout << "Seat " << seatToCancel << " is not reserved or does not exist.\n\n";
    }
}
/*set as bool pang validation sa type ng passenge. kapag hindi nagtugma, 
hindi iaaccept yung input kasi ang irereturn lang niya is either r or S*/
bool passTypeValidation(char passType) {
    return (passType == 'S' || passType == 'R');
}
//same din dito
bool seatConfirmValidation(char ConfrmSR) {
    return (ConfrmSR == 'Y' || ConfrmSR == 'y' || ConfrmSR == 'N' || ConfrmSR == 'n');
}

//ito pang confirm lang ng seat reservation 
char seatConfirmation() {
    char ConfrmSR;



    cout << "Would you like to confirm your reservation: \n";
    cout << "[Y] - Yes\n[N] - No\n";
    cout << "Confirm: ";
    cin >> ConfrmSR;

    return ConfrmSR;
}

void seatConfirm(char (&reserve)[2][10], int row, int col) {
    char ConfrmSR;

    
    do {
        ConfrmSR = seatConfirmation();

        if (!seatConfirmValidation(ConfrmSR)) {
            cout << "Invalid Input. Try Again\n";
        }

    } while (!seatConfirmValidation(ConfrmSR));

    if (ConfrmSR == 'Y' || ConfrmSR == 'y') {
        cout << "Seat Reserved Successfully!\n";
        reserve[row][col] = 'R'; 
        displayBusSeats(seat, reserve); 
    } else {
        cout << "Let us know if you want to reserve a seat.\n";
    }
}

string seatReservation(string (&seat)[2][10], char passType, char (&reserve)[2][10]) {
    string ResrvSeat;

    do {
        cout << "Reserve Seat Number: ";
        cin >> ResrvSeat;
        cout << "\n";

        bool seatExists = false;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 10; j++) {
                if (seat[i][j] == ResrvSeat) {
                    seatExists = true;

                        if (passType == 'R') {
                            if (reserve[i][j] == 'R') {
                                cout << "Seat " << ResrvSeat << " is already reserved. Choose another seat.\n" <<endl;
                            }
                            else {
                                regularPassenger(seat, ResrvSeat, reserve);
                            }
                        }
                        else {
                            if (reserve[i][j] == 'R') {
                                cout << "Seat " << ResrvSeat << " is already reserved. Choose another seat.\n" <<endl;
                            }
                            else {
                            seniorPassenger(seat, ResrvSeat, reserve);
                            }
                    }
                    break;
                }
            }
        }

        if (!seatExists) {
            cout << "Seat number does not exist.\n" << endl;
        } 
        
    } while (!shouldExit);;

    return ResrvSeat;
}

void seniorPassenger(string (&seat)[2][10], string reservation, char (&reserve)[2][10]) {
    bool seatExists = false;
    int row = -1, col = -1;
    char choice, cancel;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            if (seat[i][j] == reservation) {
                seatExists = true;
                row = i;
                col = j;

                if ((i == 0 && j == 0) || (i == 1 && j == 0)) {
                    cout << "You can't reserve a driver's seat.\n" << endl;
                    cin.clear();
                    cin.ignore();
                } else if (i == 0 && j == 9) {
                    cout << "You can't reserve the backroom.\n" << endl;
                } else if (i == 0 && j == 4) {
                    cout << "You can't reserve the restroom.\n" << endl;
                    cin.clear();
                    cin.ignore();
                } else {
                    seatConfirm(reserve, row, col);

                    do {
                        cout << "\n[C] - Cancel Reservation"<<endl;
                        cout << "[R] - Reserve Another Seat"<<endl;
                        cout << "[X] - Exit" <<endl;
                        cout << "Choice: ";
                        cin >> choice;
    
                        if(choice == 'C' || choice == 'c'){
                            cout << "Proceed to cancel Seat reservation: " <<endl;
                            cout << "[Y] - Yes" <<endl;
                            cout << "[N] - No"<<endl;
                            cin >> cancel;
    
                            if (cancel == 'Y' || cancel == 'y') {
                                cancelReservation(reserve);
                            }
                        } else if (choice == 'R') {
                            
                            char passType = passengerType();
                            seatReservation(seat, passType, reserve);
                        } else if (choice == 'X'){
                            exitProgram();
                            shouldExit = true; 
                            break;
                        } else {
                            cout << "Invalid input. Try again.\n";
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        }
                    } while (choice != 'C' || choice != 'c' || choice != 'R' || choice != 'r');
                   return; 
                   }
            }
        }
    }

    if (!seatExists) {
        cout << "Seat number does not exist.\n";
    }
}

void regularPassenger(string (&seat)[2][10], string reservation, char (&reserve)[2][10]) {
    bool seatExists = false;
    int row = -1, col = -1;
    char choice, cancel;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            if (seat[i][j] == reservation) {
                seatExists = true;
                row = i;
                col = j;

                if ((i == 0 && j == 0) || (i == 1 && j == 0)) {
                    cout << "Cannot Reserve a driver's Seat.\n" << endl;
                    cin.clear();
                    cin.ignore();
                }else if (reservation == "1" || reservation == "2" || reservation == "3"){
                    cout << "This seat is only reserved for Senior Citizens\n" << endl;
                    cin.clear();
                    cin.ignore();
                } else if (i == 0 && j == 9) {
                    cout << "Cannot Reserve the Backroom.\n" << endl;
                } else if (i == 0 && j == 4) {
                    cout << "You can't reserve the restroom.\n" << endl;
                    cin.clear();
                    cin.ignore();
                } else {
                    seatConfirm(reserve, row, col);

                    do {
                        cout << "\n[C] - Cancel Reservation"<<endl;
                        cout << "[R] - Reserve Another Seat"<<endl;
                        cout << "[X} - Exit" <<endl;
                        cout << "Choice: ";
                        cin >> choice;
    
                        if(choice == 'C' || choice == 'c'){
                            cout << "Proceed to cancel Seat reservation: " <<endl;
                            cout << "[Y] - Yes" <<endl;
                            cout << "[N] - No"<<endl;
                            cin >> cancel;
    
                            if (cancel == 'Y' || cancel == 'y') {
                                cancelReservation(reserve);
                            }
                        } else if (choice == 'R') {
                            // seatReservation(seat, 'S', reserve);
                            
                            char passType = passengerType();
                            seatReservation(seat, passType, reserve);
                        } else if (choice == 'X'){
                            exitProgram();
                            shouldExit = true; 
                            break;
                        } else {
                            cout << "Invalid input. Try again.\n";
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        }
                        break;
                    } while (choice != 'C' || choice != 'c' || choice != 'R' || choice != 'r');
                   return;  
                   }
            }
        }
    }

    if (!seatExists) {
        cout << "Seat number does not exist.\n";
    }
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

void exitProgram() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            if (reserve[i][j] == 'R') {
                cout << "You reserved seat [ " << seat[i][j] << " ] located at row " << j+1 << " column " << i+1 << ".\n";
            }
        }
    }
    
    cout << "Exiting the program. Happy Travels!~" << endl;
    shouldExit = true;
    return;
}

