#include <iostream>

using namespace std;

int main(){
    int num = 1;
    do
    {
        if (num % 3 ==0){
            cout << num << "\n";
            num++;
        }
        else{
            num ++;
        }
    }
    while (num <= 30);

    return 0;
}