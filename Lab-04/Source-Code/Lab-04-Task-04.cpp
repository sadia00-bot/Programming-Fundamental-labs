#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check positive or not
    if(num > 0){
        cout << "Number is positive" << endl;

        // Nested if-else for digits
        if(num < 10)
            cout << "1 digit";
        else if(num < 100)
            cout << "2 digits";
        else if(num < 1000)
            cout << "3 digits";
        else if(num < 10000)
            cout << "4 digits";
        else
            cout << "More than 4 digits";
    }
    else{
        cout << "Number is not positive";
    }

    return 0;
}