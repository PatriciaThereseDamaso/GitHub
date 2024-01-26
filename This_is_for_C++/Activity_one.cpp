#include <iostream>

using namespace std;

int fibonacci(int numONE, int numTWO, int n){
    if (n == 0 ){
        return numONE;
    }
    else if (n == 1){
        return numTWO;
    }
    else {
        return fibonacci (numTWO, numONE + numTWO, n - 1);
    }

}

int main(){
    int numONE = 0, numTWO = 0, n = 0;

    cout << "Enter first number: ";
    cin >> numONE;
    cout << "Enter second number: ";
    cin >> numTWO;
    cout << endl << "Enter number of elements: ";
    cin >> n;

    cout << "Number Series: ";

    for (int i = 0; i < n; ++i) {
    cout << fibonacci(numONE, numTWO, i) << " ";
    }

return 0;
}