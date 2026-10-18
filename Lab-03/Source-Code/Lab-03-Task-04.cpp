#include <iostream>
using namespace std;

int main(){
    int a;
    double value = 8.9; // ya 8.2

    a = value; // double se int me demote hoga

    cout << "Original value = " << value << endl;
    cout << "After storing in int a = " << a << endl;

    // Direct example
    int b = 8.2;
    cout << "b = 8.2 stores as = " << b << endl;

    return 0;
}