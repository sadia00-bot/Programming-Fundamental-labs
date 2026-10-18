#include <iostream>
using namespace std;

int main(){
    double val1 = 28, val2 = 32, val3 = 37, val4 = 24, val5 = 33;
    double sum, average;

    sum = val1 + val2 + val3 + val4 + val5;
    average = sum / 5;

    cout << "Values are: " << val1 << ", " << val2 << ", " << val3 << ", " << val4 << ", " << val5 << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}