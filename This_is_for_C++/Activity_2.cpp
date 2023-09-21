#include <iostream>

using namespace std;

int main(){
    int num = 1;
    do
    {
        if (num % 2 ==1){
            cout << num << "\n";
            num++;
        }
        else{
            num ++;
        }
    }
    while (num <= 20);

    return 0;
}