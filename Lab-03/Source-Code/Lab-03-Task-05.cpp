#include <iostream>
using namespace std;

int main(){
    int qty = 100;
    int salesReps = 3;
    double unitsEach;

    // Task 5 ka main line - yehi aapko likhna hai
    unitsEach = static_cast<double>(qty) / salesReps;

    cout << "Total qty: " << qty << endl;
    cout << "Sales reps: " << salesReps << endl;
    cout << "Units for each rep: " << unitsEach << endl;

    return 0;
}