#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num >= 0)
        cout << "Number entered is positive: " << num;
    else
        cout << "Number entered is negative. Please enter positive number!";
    
    return 0;
}