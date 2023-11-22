#include <iostream>
#include <cmath>

using namespace std;

int Sum(int a,int b,int c){
        int sum = 0;
        sum = a + b + c;
        return sum;
    }

int main() {
    int a = 0,b = 0,c = 0, sum = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    
    sum = Sum(a, b, c);

    cout << sum;

    return 0;
}