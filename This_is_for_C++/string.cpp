#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    string school;

    cout << "Where do you study?";
    getline(cin,school);
    cout << "Oh! We're both studying at "<<school;

    return 0;
}