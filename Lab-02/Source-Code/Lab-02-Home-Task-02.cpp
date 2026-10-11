#include <iostream>
using namespace std;

int main()
{
    char smallLetter;
    cout << "Enter a small letter(a-z)";
    cin >> smallLetter;

    char capitalLetter = smallLetter - 32;

    cout << "Capital Letter is: " << capitalLetter << endl;
    return 0;
}