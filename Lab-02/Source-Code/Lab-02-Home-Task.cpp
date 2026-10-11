#include <iostream>
using namespace std;

int main()
{
    int var1 = 20;
    int var2 = 30;
    int temp;

    cout << "Before Swap" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    // Swapping
    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << "After Swap" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    return 0;
}